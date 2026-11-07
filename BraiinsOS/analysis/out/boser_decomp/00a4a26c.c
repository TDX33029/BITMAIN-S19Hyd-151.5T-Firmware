// FUN_00a4a26c @ 00a4a26c size=80 calls_out=1 calls_in=0
// strings: 

void FUN_00a4a26c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (param_3 != 0) {
    param_2 = param_2 + 0x18;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  if (param_4 != 0) {
    uVar1 = 1;
  }
  pcVar2 = "0";
  if (param_4 == 0) {
    pcVar2 = *(char **)(param_2 + 0x10);
  }
  FUN_019a63c0(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),pcVar2,uVar1);
  return;
}

