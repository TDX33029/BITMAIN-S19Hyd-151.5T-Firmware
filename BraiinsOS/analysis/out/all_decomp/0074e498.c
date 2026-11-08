// FUN_0074e498 @ 0074e498 size=84 calls_out=0 calls_in=0
// strings: 

void FUN_0074e498(uint *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 < 3) {
    iVar3 = 0xc;
    iVar1 = 8;
    iVar4 = 0x10;
    iVar2 = 4;
  }
  else {
    if (*param_1 == 3) {
      return;
    }
    iVar3 = 0x14;
    iVar1 = 0x10;
    iVar4 = 0x18;
    iVar2 = 0xc;
  }
                    /* WARNING: Could not recover jumptable at 0x0074e4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)((int)param_1 + iVar2) + 0x10))
            ((int)param_1 + iVar4,*(undefined4 *)((int)param_1 + iVar1),
             *(undefined4 *)((int)param_1 + iVar3));
  return;
}

