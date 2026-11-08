// FUN_01412a00 @ 01412a00 size=232 calls_out=1 calls_in=1
// strings: 

void FUN_01412a00(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  
  uVar2 = 7;
  puVar1 = &DAT_00477ddd;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 1:
    uVar2 = 3;
    puVar1 = &DAT_00477de4;
    break;
  case 2:
    uVar2 = 4;
    puVar1 = &DAT_0056e630;
    break;
  case 3:
    uVar2 = 3;
    puVar1 = &DAT_00477de7;
    break;
  case 4:
    uVar2 = 6;
    puVar1 = &DAT_00477dea;
    break;
  case 5:
    uVar2 = 4;
    puVar1 = &DAT_0056efe0;
    break;
  case 6:
    uVar2 = 5;
    puVar1 = &DAT_005319d2;
    break;
  case 7:
    puVar1 = &DAT_00477df0;
    break;
  case 8:
    uVar2 = 5;
    puVar1 = &DAT_00477df7;
    break;
  case 9:
    uVar2 = (uint)(byte)param_1[0x10];
    if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar2,0xf,&DAT_01cf40b4);
    }
    puVar1 = param_1 + 1;
    break;
  case 10:
    puVar1 = *(undefined **)(param_1 + 4);
    uVar2 = *(uint *)(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x01412af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0xc))(param_2,puVar1,uVar2);
  return;
}

