// FUN_013436d8 @ 013436d8 size=76 calls_out=1 calls_in=1
// strings: 

void FUN_013436d8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  uVar4 = param_2[9];
  uVar5 = param_2[10];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  param_1[9] = uVar4;
  param_1[10] = uVar5;
  switch(*(undefined1 *)(param_2 + 0xb)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    if (param_2[0xc] != 0) {
      thunk_FUN_01be4678();
      return;
    }
  }
  return;
}

