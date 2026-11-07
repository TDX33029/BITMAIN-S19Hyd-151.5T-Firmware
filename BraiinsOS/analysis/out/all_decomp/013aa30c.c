// FUN_013aa30c @ 013aa30c size=328 calls_out=3 calls_in=0
// strings: 

void FUN_013aa30c(undefined4 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar2 = param_4[4];
  uVar3 = param_4[5];
  if (uVar2 <= uVar3) {
    uVar4 = param_4[3];
    if (*param_4 - 1U < 2) {
      if (uVar4 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,uVar3,uVar4,&DAT_01894428);
      }
      uVar4 = *(uint *)(param_2 + 0x40);
      if ((uVar4 <= uVar3 - uVar2) &&
         (iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(param_2 + 0x3c),param_4[2] + uVar2,uVar4),
         iVar1 == 0)) {
        bVar5 = CARRY4(uVar4,uVar2);
        iVar1 = uVar4 + uVar2;
joined_r0x013aa404:
        if (bVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
        }
        param_1[1] = 0;
        param_1[2] = iVar1;
        *param_1 = 1;
        return;
      }
    }
    else {
      if (uVar4 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,uVar3,uVar4,&DAT_01894418);
      }
      uVar4 = *(uint *)(param_2 + 0x40);
      local_24 = 0;
      local_28 = 1;
      if ((uVar4 <= uVar3 - uVar2) &&
         (uVar6 = (**(code **)(param_2 + 0x30))
                            (param_2,&local_28,param_4[2] + uVar2,uVar3 - uVar2,
                             *(undefined4 *)(param_2 + 0x3c),uVar4), (uVar6 & 1) != 0)) {
        uVar2 = (int)(uVar6 >> 0x20) + uVar2;
        bVar5 = CARRY4(uVar2,uVar4);
        iVar1 = uVar2 + uVar4;
        goto joined_r0x013aa404;
      }
    }
  }
  *param_1 = 0;
  return;
}

