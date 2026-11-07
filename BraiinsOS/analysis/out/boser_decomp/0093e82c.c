// FUN_0093e82c @ 0093e82c size=68 calls_out=3 calls_in=1
// strings: 

void FUN_0093e82c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  while ((uVar4 = FUN_0093e888(uVar1,uVar2), (int)uVar4 != 2 && ((uVar4 & 1) == 0))) {
    FUN_019f8c54(uVar3,1);
    FUN_01209910((int)(uVar4 >> 0x20));
  }
  return;
}

