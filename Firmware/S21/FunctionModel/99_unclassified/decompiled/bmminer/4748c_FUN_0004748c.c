// FUN_0004748c @ 0004748c  size=36  callers=1
// program: bmminer


undefined4 FUN_0004748c(uint param_1,uint param_2)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = 0xfe < param_2;
  bVar2 = param_2 == 0xff;
  if (param_2 < 0x100) {
    bVar3 = 2 < param_1;
    bVar2 = param_1 == 3;
  }
  if (!bVar3 || bVar2) {
    uVar1 = *(undefined4 *)(&DAT_000cb678 + (param_2 + param_1 * 0x100 + 4) * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

