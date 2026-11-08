// FUN_00dbccf0 @ 00dbccf0 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_00dbccf0(undefined4 param_1,int *param_2)

{
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  
  local_4c = thunk_FUN_01be5118(0x80);
  if (local_4c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x80);
  }
  local_48 = 0;
  local_44 = &local_50;
  local_50 = 0x80;
                    /* WARNING: Could not recover jumptable at 0x00dbcd38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_00dbcd3c + *(int *)(&LAB_00dbcd3c + *param_2 * 4)))();
  return;
}

