// FUN_013c93d8 @ 013c93d8 size=232 calls_out=5 calls_in=2
// strings: Tried to shrink to a larger capacitymax line length exceeded

undefined8 FUN_013c93d8(uint *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_r6;
  uint uVar5;
  uint local_28;
  
  uVar5 = *param_1;
  if (uVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("Tried to shrink to a larger capacitymax line length exceeded",0x49,&DAT_018ad594);
  }
  if (uVar5 != 0) {
    uVar1 = param_1[1];
    if (param_2 == 0) {
      thunk_FUN_016d3fb4();
      uVar3 = param_3;
    }
    else {
      unaff_r6 = param_4 * param_2;
      if (unaff_r6 < param_3) {
        local_28 = 0;
        iVar2 = FUN_016d51b0(&local_28,4,unaff_r6);
        uVar3 = local_28;
        if ((iVar2 != 0) || (local_28 == 0)) goto LAB_013c9498;
        uVar4 = uVar5 * param_4;
        if (unaff_r6 < uVar5 * param_4) {
          uVar4 = unaff_r6;
        }
        FUN_016dd1aa(local_28,uVar1,uVar4);
        thunk_FUN_016d3fb4(uVar1);
      }
      else {
        uVar3 = thunk_FUN_016d4ea4(uVar1,unaff_r6);
        if (uVar3 == 0) goto LAB_013c9498;
      }
    }
    *param_1 = param_2;
    param_1[1] = uVar3;
  }
  param_3 = 0x80000001;
LAB_013c9498:
  return CONCAT44(unaff_r6,param_3);
}

