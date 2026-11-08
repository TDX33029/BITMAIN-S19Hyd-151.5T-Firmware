// FUN_01ac5df8 @ 01ac5df8 size=128 calls_out=0 calls_in=0
// strings: 

void FUN_01ac5df8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_90 [128];
  
  uVar1 = *param_2;
  iVar2 = param_2[1];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)*param_1) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x01ac5e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar2 + 0xc))(uVar1,&UNK_00570e40,8);
    return;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x01ac5ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar2 + 0xc))(uVar1,&UNK_0056cff0,4);
    return;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x01ac5e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar2 + 0xc))(uVar1,&UNK_00532444,6);
    return;
  case 3:
    FUN_012fa178(uVar1,iVar2,&DAT_00594e6a,auStack_90 + 0x80);
    return;
  }
}

