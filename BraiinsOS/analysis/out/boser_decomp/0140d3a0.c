// FUN_0140d3a0 @ 0140d3a0 size=148 calls_out=1 calls_in=4
// strings: 

void FUN_0140d3a0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_20;
  undefined1 local_1f;
  int local_1c;
  
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  if (iVar3 == 0) {
    local_1f = 9;
  }
  else {
    FUN_0140ce9c(&local_20,iVar2,iVar3);
    if ((local_20 != '\x01') && (local_1f = 0, local_1c == iVar3)) {
      iVar2 = param_2[1];
      iVar3 = param_2[2];
      iVar1 = param_2[3];
      *param_1 = *param_2;
      param_1[1] = iVar2;
      param_1[2] = iVar3;
      param_1[3] = iVar1;
      return;
    }
  }
  iVar1 = *param_2;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = local_1f;
                    /* WARNING: Could not recover jumptable at 0x0140d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x10))(param_2 + 3,iVar2,iVar3);
  return;
}

