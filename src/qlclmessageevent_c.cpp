//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qlclmessageevent.h"

C_EXPORT QLCLMessageEventH QLCLMessageEvent_create(QEvent::Type aType)
{
	return (QLCLMessageEventH) new QLCLMessageEvent(aType);
}

C_EXPORT void QLCLMessageEvent_destroy(QLCLMessageEventH handle)
{
	delete (QLCLMessageEvent *)handle;
}

C_EXPORT QLCLMessageEventH QLCLMessageEvent_create2(QEvent::Type aType, PTRUINT aMsg, PTRUINT aWParam, PTRUINT aLParam, PTRUINT aMsgResult)
{
	return (QLCLMessageEventH) new QLCLMessageEvent(aType, aMsg, aWParam, aLParam, aMsgResult);
}

C_EXPORT PTRUINT QLCLMessageEvent_getMsg(QLCLMessageEventH handle)
{
	return (PTRUINT) ((QLCLMessageEvent *)handle)->getMsg();
}

C_EXPORT PTRUINT QLCLMessageEvent_getWParam(QLCLMessageEventH handle)
{
	return (PTRUINT) ((QLCLMessageEvent *)handle)->getWParam();
}

C_EXPORT PTRUINT QLCLMessageEvent_getLParam(QLCLMessageEventH handle)
{
	return (PTRUINT) ((QLCLMessageEvent *)handle)->getLParam();
}

C_EXPORT PTRUINT QLCLMessageEvent_getMsgResult(QLCLMessageEventH handle)
{
	return (PTRUINT) ((QLCLMessageEvent *)handle)->getMsgResult();
}

C_EXPORT void QLCLMessageEvent_setMsg(QLCLMessageEventH handle, PTRUINT Value)
{
	((QLCLMessageEvent *)handle)->setMsg(Value);
}

C_EXPORT void QLCLMessageEvent_setWParam(QLCLMessageEventH handle, PTRUINT Value)
{
	((QLCLMessageEvent *)handle)->setWParam(Value);
}

C_EXPORT void QLCLMessageEvent_setLParam(QLCLMessageEventH handle, PTRUINT Value)
{
	((QLCLMessageEvent *)handle)->setLParam(Value);
}

C_EXPORT void QLCLMessageEvent_setMsgResult(QLCLMessageEventH handle, PTRUINT Value)
{
	((QLCLMessageEvent *)handle)->setMsgResult(Value);
}

