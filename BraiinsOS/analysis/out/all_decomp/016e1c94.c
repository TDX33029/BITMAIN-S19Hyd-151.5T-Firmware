// FUN_016e1c94 @ 016e1c94 size=244 calls_out=4 calls_in=1
// strings: 

void FUN_016e1c94(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_34 [24];
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar1 = FUN_016e1884(param_1,auStack_34,1,0);
  if ((iVar1 != 0) && (iVar1 = FUN_016e17e0(auStack_34,-(param_2 != 0)), iVar1 != 0)) {
    uVar4 = FUN_016e1048(param_1);
    puVar3 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      uVar2 = 1;
      goto LAB_016e1d2c;
    }
  }
  if (*(char *)(param_1 + 1) == '\0') {
    puVar3 = param_1 + 2;
  }
  else {
    puVar3 = (undefined4 *)param_1[2];
  }
  uVar2 = 0;
  *(byte *)(puVar3 + 3) = *(byte *)(puVar3 + 3) | 2;
  *param_1 = 0;
LAB_016e1d2c:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,puVar3,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

