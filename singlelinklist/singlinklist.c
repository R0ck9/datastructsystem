/*************************************************************************
	> File Name: singlinklist.c
	> Author: liqian
	> Mail: 971728754@qq.com
	> Created Time: 2018年12月26日 星期三 21时37分45秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<syslog.h>
#include"singlinklist.h"
#include"list.h"
#define NODENUM 1
extern SingLinklistNode *m_SingLinklistHeadNode;
/*
* function name: InitSingLinklistNode()
* parameter    : null
* return value : no
* describetion : init head node; 
* */
void InitSingLinklistNode()
{
    m_SingLinklistHeadNode = (SingLinklistNode *)malloc(sizeof(SingLinklistNode));
    if(NULL==m_SingLinklistHeadNode )
    {
        syslog(LOG_INFO,"malloc m_SingLinklistHeadNode node failure!");
        return;
    }

    /*init node data*/
    m_SingLinklistHeadNode->m_nodeNum = NODENUM;
    m_SingLinklistHeadNode->m_key     = 1;

    m_SingLinklistHeadNode->data = NULL;
    m_SingLinklistHeadNode->next = NULL;
    return;    
}

SingLinklistNode *SingLinklistNode_HeadInsearch(SingLinklistNode *pnode,DataType key)
{
    assert(pnode);
    SingLinklistNode *tmpnode = pnode;
    SingLinklistNode *m_ISNode = (SingLinklistNode *)malloc(SingLinklistNode);
    if(NULL == m_ISNode)
    {
        syslog(LOG_INFO,"Insearch node malloc failure");
        return;
    }
    /*init Insearch node data*/
    m_ISNode->m_nodeNum = ++NODENUM;
    m_ISNode->key = key;
    m_ISNode->data = NULL;

    m_ISNode->next = tmpnode;
    


}







