// FUN_01be295c @ 01be295c size=146 calls_out=3 calls_in=0
// strings: 

void FUN_01be295c(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int local_30;
  undefined1 *puStack_2c;
  uint local_28;
  undefined1 auStack_24 [8];
  int local_1c;
  int local_14;
  
  local_14 = DAT_01d53560;
  if (*(code **)(*param_1 + 0xc) == (code *)&DAT_01be1621) {
    uVar1 = param_1[0x11];
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0xc))(param_1,0xffffffff);
  }
  uVar1 = uVar1 & 0xfffffffe;
  if (uVar1 != 0) {
    if (param_2 != 0) {
      uVar1 = uVar1 - 1;
    }
    if (*(char *)((int)param_1 + 0x181) != '\0') {
      uVar1 = uVar1 + 1;
    }
    local_30 = param_1[1];
    puStack_2c = auStack_24;
    local_28 = uVar1;
    iVar2 = FUN_01be3cf8(0x1be1299,&local_30);
    if (((iVar2 != 0) && (local_1c != 0)) &&
       (iVar2 = FUN_01be27b4(param_1,uVar1,auStack_24), iVar2 != 0)) goto LAB_01be29b4;
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
LAB_01be29b4:
  if (DAT_01d53560 != local_14) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return;
}

