// FUN_01a737fc @ 01a737fc size=172 calls_out=4 calls_in=44
// strings: 

void FUN_01a737fc(undefined4 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int local_e0;
  int iStack_dc;
  undefined1 auStack_d8 [96];
  undefined1 auStack_78 [104];
  
  cVar1 = (char)param_2[0x1a];
  bVar4 = cVar1 == '\x01';
  if (bVar4) {
    cVar1 = *(char *)((int)param_2 + 0x69);
  }
  if (bVar4 && cVar1 == '\0') {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    *(undefined1 *)((int)param_2 + 0x69) = 1;
    *param_2 = 3;
    param_2[1] = 0;
    if (iVar2 == 3 && iVar3 == 0) {
      FUN_01a71aac(&local_e0,0,1);
    }
    else {
      FUN_01bed4e2(auStack_d8,param_2 + 2,0x60);
      local_e0 = iVar2;
      iStack_dc = iVar3;
    }
    FUN_01a738c0(auStack_78,&local_e0);
    FUN_01bed4e2(param_1,auStack_78,0x68);
    FUN_01a70c28(&local_e0);
  }
  else {
    *param_1 = 4;
    param_1[1] = 0;
  }
  return;
}

