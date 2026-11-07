// FUN_0143ba98 @ 0143ba98 size=52 calls_out=1 calls_in=0
// strings: 

int FUN_0143ba98(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x15) != '\x02') {
    FUN_0143b85c((undefined4 *)(param_1 + 8));
  }
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return param_1;
}

