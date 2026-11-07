// FUN_007882a4 @ 007882a4 size=192 calls_out=1 calls_in=0
// strings: signature::Error { source: 

undefined4 FUN_007882a4(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *local_24;
  int **local_20;
  undefined1 *local_1c;
  
  pcVar3 = *(code **)(param_3 + 0xc);
  iVar1 = (*pcVar3)(param_2,"signature::Error { source: ",0x1b);
  uVar2 = 1;
  if (iVar1 == 0) {
    if (*param_1 == 0) {
      iVar1 = (*pcVar3)(param_2,&DAT_00568af8,4);
    }
    else {
      local_1c = &LAB_0135a8cc;
      local_20 = &local_24;
      local_24 = param_1;
      iVar1 = FUN_00fa948c(param_2,param_3,&DAT_00594982,&local_20);
    }
    if (iVar1 == 0) {
      uVar2 = (*pcVar3)(param_2," }",2);
    }
  }
  return uVar2;
}

