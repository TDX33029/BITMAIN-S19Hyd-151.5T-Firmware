// FUN_00eab9c4 @ 00eab9c4 size=212 calls_out=3 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x00eabb0c) */

int FUN_00eab9c4(int param_1,int param_2)

{
  int iVar1;
  int *local_34;
  int *local_30;
  int *piStack_2c;
  int *piStack_28;
  
  iVar1 = FUN_01876620();
  FUN_0170f924(&local_34,param_1 + 0x10);
  if ((local_34 == local_30) && (local_34 = piStack_2c, piStack_2c == piStack_28)) {
    return iVar1;
  }
  if (local_34 == (int *)0x0) {
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00eaba6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)(&DAT_00eaba70 + *(int *)(&DAT_00eaba70 + *local_34 * 4)))
                    (*(int *)(&DAT_00eaba70 + *local_34 * 4),param_2 + iVar1 * 8,0x40 - iVar1,
                     local_34 + 1);
  return iVar1;
}

