// FUN_01676d88 @ 01676d88 size=100 calls_out=1 calls_in=1
// strings: 

bool FUN_01676d88(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_1[1];
  bVar2 = false;
  iVar3 = param_1[2];
  iVar4 = param_2[1];
  if ((*(int *)(*param_1 + 8) == *(int *)(*param_2 + 0x10)) &&
     (iVar5 = param_2[2],
     iVar1 = thunk_FUN_01bed842(*(undefined4 *)(*param_1 + 4),*(undefined4 *)(*param_2 + 0xc)),
     iVar1 == 0 && iVar3 == iVar5)) {
    iVar3 = thunk_FUN_01bed842(iVar6,iVar4,iVar3);
    bVar2 = iVar3 == 0;
  }
  return bVar2;
}

