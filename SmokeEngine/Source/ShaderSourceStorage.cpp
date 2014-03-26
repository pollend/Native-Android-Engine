#include "Storage\ShaderSourceStorage.h"


ShaderSourceStorage::ShaderSourceStorage(void)
{
	_shaderSource = std::map<std::string,Source*>();

}


ShaderSourceStorage::~ShaderSourceStorage(void)
{
}

void ShaderSourceStorage::AppendSource(std::string id, Source* source)
{
	if(source->GetType() == GL_FRAGMENT_SHADER)
	{
		_shaderSource.insert(std::pair<std::string,Source*>(id + FRAMGENT_SOURCE,source));
	}
	else if(source->GetType() == GL_VERTEX_SHADER)
	{
		_shaderSource.insert(std::pair<std::string,Source*>(id + VERTEX_SOURCE,source));
	}
}

Source* ShaderSourceStorage::GetSource(std::string id, GLenum Type)
{
	if(Type == GL_FRAGMENT_SHADER)
	{
		return _shaderSource[id + FRAMGENT_SOURCE];
	}
	else if (Type == GL_VERTEX_SHADER)
	{
		return _shaderSource[id + VERTEX_SOURCE];
	}
	return NULL;
}