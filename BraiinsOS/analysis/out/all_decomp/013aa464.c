// FUN_013aa464 @ 013aa464 size=300 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_013aa464(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar4 = param_3[4];
  uVar5 = param_3[5];
  uVar1 = 0;
  if (uVar4 <= uVar5) {
    uVar3 = param_3[3];
    if (*param_3 - 1U < 2) {
      if (uVar3 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar4,uVar5,uVar3,&DAT_01894428);
      }
      uVar3 = *(uint *)(param_1 + 0x40);
      if (uVar3 <= uVar5 - uVar4) {
        iVar2 = thunk_FUN_016dd50a(*(undefined4 *)(param_1 + 0x3c),param_3[2] + uVar4,uVar3);
        uVar1 = 0;
        if ((iVar2 == 0) && (uVar1 = 1, CARRY4(uVar4,uVar3))) {
LAB_013aa548:
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
        }
      }
    }
    else {
      if (uVar3 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar4,uVar5,uVar3,&DAT_01894418);
      }
      uVar3 = *(uint *)(param_1 + 0x40);
      local_1c = 0;
      local_20 = 1;
      if (uVar3 <= uVar5 - uVar4) {
        uVar6 = (**(code **)(param_1 + 0x30))
                          (param_1,&local_20,param_3[2] + uVar4,uVar5 - uVar4,
                           *(undefined4 *)(param_1 + 0x3c),uVar3);
        uVar1 = 0;
        if (((uVar6 & 1) != 0) && (uVar1 = 1, CARRY4((int)(uVar6 >> 0x20) + uVar4,uVar3)))
        goto LAB_013aa548;
      }
    }
  }
  return uVar1;
}

