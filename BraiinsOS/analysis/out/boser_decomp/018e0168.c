// FUN_018e0168 @ 018e0168 size=176 calls_out=1 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x018e0468) */

void FUN_018e0168(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_2;
  uVar3 = 1;
  if ((int)uVar1 < 0) {
    uVar3 = uVar1;
  }
  if (uVar1 == 0x80000003) {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar4 = param_2[3];
    *(char *)(param_1 + 4) = (char)(0x3000201 >> ((uVar3 & 0x1f) << 3));
    param_1[3] = param_2[0x1f];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar4;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x018e01cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_018e01d0 + *(int *)(&LAB_018e01d0 + uVar3 * 4)))(0xc,8);
  return;
}

