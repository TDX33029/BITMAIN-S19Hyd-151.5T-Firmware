// FUN_01178574 @ 01178574 size=104 calls_out=0 calls_in=0
// strings: 

void FUN_01178574(int *param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar1 = 1;
  uVar3 = *(uint *)*param_1;
  uVar5 = ((uint *)*param_1)[1];
  if ((uint)(uVar3 < 4) <= -uVar5) {
    iVar1 = uVar3 - 4;
  }
  if (iVar1 == 0) {
    uVar4 = 0xb;
    pcVar2 = "Flushing(_)ReadingPreface(_)Pending";
  }
  else if (iVar1 == 1) {
    uVar4 = 0x11;
    pcVar2 = "ReadingPreface(_)Pending";
  }
  else {
    uVar4 = 4;
    pcVar2 = &DAT_0056ce18;
  }
                    /* WARNING: Could not recover jumptable at 0x011785d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,pcVar2,uVar4,-(uVar5 + (uVar3 >= 4)));
  return;
}

