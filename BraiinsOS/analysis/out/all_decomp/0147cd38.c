// FUN_0147cd38 @ 0147cd38 size=172 calls_out=5 calls_in=0
// strings: 

void FUN_0147cd38(int param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)(param_1 + 0x150);
  if (cVar1 == '\0') {
    FUN_01475c70(param_1);
    if (1 < *(byte *)(param_1 + 0x98)) {
      piVar2 = *(int **)(param_1 + 0x9c);
      (**(code **)(*piVar2 + 0x10))(piVar2 + 3,piVar2[1],piVar2[2]);
      thunk_FUN_016d3fb4(piVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x0147cde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 0xa0) + 0x10))
              (param_1 + 0xac,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8));
    return;
  }
  if (cVar1 == '\x03') {
    FUN_0147c174(param_1 + 0x158);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_0147c8b0(param_1 + 0x198);
    FUN_0147bd28(param_1 + 0x158);
  }
  *(undefined1 *)(param_1 + 0x152) = 0;
  if (*(char *)(param_1 + 0x151) != '\0') {
    FUN_01475c70(param_1 + 0xb0);
  }
  *(undefined1 *)(param_1 + 0x151) = 0;
  return;
}

