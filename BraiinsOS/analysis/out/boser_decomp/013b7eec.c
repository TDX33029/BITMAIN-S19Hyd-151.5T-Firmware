// FUN_013b7eec @ 013b7eec size=240 calls_out=1 calls_in=0
// strings: 

void FUN_013b7eec(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  uint uVar3;
  
  puVar1 = (undefined1 *)*param_1;
  uVar3 = 7;
  puVar2 = &DAT_00477ddd;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*puVar1) {
  case 1:
    uVar3 = 3;
    puVar2 = &DAT_00477de4;
    break;
  case 2:
    uVar3 = 4;
    puVar2 = &DAT_0056e630;
    break;
  case 3:
    uVar3 = 3;
    puVar2 = &DAT_00477de7;
    break;
  case 4:
    uVar3 = 6;
    puVar2 = &DAT_00477dea;
    break;
  case 5:
    uVar3 = 4;
    puVar2 = &DAT_0056efe0;
    break;
  case 6:
    uVar3 = 5;
    puVar2 = &DAT_005319d2;
    break;
  case 7:
    puVar2 = &DAT_00477df0;
    break;
  case 8:
    uVar3 = 5;
    puVar2 = &DAT_00477df7;
    break;
  case 9:
    uVar3 = (uint)(byte)puVar1[0x10];
    if (0xf < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar3,0xf,&DAT_01cf4040);
    }
    puVar2 = puVar1 + 1;
    break;
  case 10:
    puVar2 = *(undefined **)(puVar1 + 4);
    uVar3 = *(uint *)(puVar1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x013b7fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,puVar2,uVar3);
  return;
}

