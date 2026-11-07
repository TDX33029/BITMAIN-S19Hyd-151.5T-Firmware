// FUN_01b4afcc @ 01b4afcc size=352 calls_out=5 calls_in=4
// strings: 

void FUN_01b4afcc(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_6c [64];
  uint local_2c;
  
  local_2c = DAT_01d53560;
  if ((param_2 != 0) && ((byte)(*(char *)(param_1 + 0x12e) - 1U) < 2)) {
    iVar5 = param_1[1];
    puVar4 = param_1 + 2;
    uVar1 = FUN_01b3b6b4(*param_1);
    iVar2 = (**(code **)(iVar5 + 0x10))(auStack_6c,puVar4);
    if (iVar2 == 0) {
LAB_01b4b050:
      iVar2 = 0;
    }
    else {
      FUN_01b26974(puVar4,param_1 + 0xca,400);
      iVar2 = (**(code **)(param_1[1] + 0xc))(puVar4,auStack_6c,uVar1);
      if (iVar2 == 0) goto LAB_01b4b050;
      iVar2 = (**(code **)(iVar5 + 0x10))(param_2,puVar4);
      FUN_01b26974(puVar4,param_1 + 0x66,400);
      *(undefined1 *)(param_1 + 0x12e) = 3;
    }
    FUN_01b6b174(auStack_6c,0x40);
    if (iVar2 != 0) {
      uVar3 = 1;
      param_2 = extraout_r1;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = uVar1;
      }
      goto LAB_01b4b074;
    }
    FUN_01b4a5d4(param_1);
    param_2 = extraout_r1_00;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
  }
  uVar3 = 0;
LAB_01b4b074:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar3,param_2,local_2c ^ DAT_01d53560,0);
  }
  return;
}

