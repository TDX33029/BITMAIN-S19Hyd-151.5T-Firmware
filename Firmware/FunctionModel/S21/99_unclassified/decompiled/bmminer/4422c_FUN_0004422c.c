// FUN_0004422c @ 0004422c  size=420  callers=1
// program: bmminer


undefined1 * FUN_0004422c(size_t *param_1,void *param_2,undefined4 param_3,undefined1 param_4)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  uint __n;
  char *__s;
  char *__s_00;
  int iVar7;
  char *__s_01;
  char acStack_2028 [8196];
  
  __s_01 = *(char **)((int)param_2 + 0x120);
  sVar1 = strlen(__s_01);
  __s_00 = *(char **)((int)param_2 + 0x134);
  sVar2 = strlen(__s_00);
  __s = *(char **)((int)param_2 + 0x140);
  sVar3 = strlen(__s);
  sVar3 = sVar1 + sVar2 + 0x1cb + sVar3;
  puVar4 = calloc(1,sVar3);
  if (puVar4 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar4 + 1) = param_3;
    *puVar4 = param_4;
    memcpy(puVar4 + 5,param_2,0x1c0);
    sVar1 = strlen(__s_01);
    __n = sVar1 + 1 & 0xff;
    puVar4[0x1c5] = (char)(sVar1 + 1);
    memcpy(puVar4 + 0x1c6,__s_01,__n);
    sVar1 = strlen(__s_00);
    uVar5 = sVar1 + 1 & 0xff;
    puVar4[__n + 0x1c6] = (char)(sVar1 + 1);
    iVar6 = uVar5 + __n + 0x1c7;
    memcpy(puVar4 + __n + 0x1c7,__s_00,uVar5);
    iVar7 = iVar6 + 1;
    sVar1 = strlen(__s);
    uVar5 = sVar1 + 1 & 0xff;
    puVar4[iVar6] = (char)(sVar1 + 1);
    memcpy(puVar4 + iVar7,__s,uVar5);
    if ((DAT_008c702e != '\0') &&
       (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
      snprintf(acStack_2028,0x2000,"need data size:%d, actual size:%d\n",sVar3,uVar5 + iVar7);
      FUN_0004948c(7,acStack_2028,0);
    }
    *param_1 = sVar3;
  }
  return puVar4;
}

