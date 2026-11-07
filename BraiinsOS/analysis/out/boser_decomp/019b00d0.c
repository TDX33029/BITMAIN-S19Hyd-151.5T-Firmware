// FUN_019b00d0 @ 019b00d0 size=112 calls_out=1 calls_in=18
// strings: 

undefined8 FUN_019b00d0(byte *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  char local_4c [4];
  undefined4 local_48;
  undefined4 local_44;
  byte *local_30;
  int local_2c;
  undefined1 local_28;
  undefined2 local_14;
  undefined1 local_12;
  
  bVar3 = param_2 != 0;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = (uint)*param_1;
  }
  if (bVar3) {
    uVar1 = LZCOUNT(uVar1 - 0x2f);
  }
  local_14 = 0x201;
  if (bVar3) {
    uVar1 = uVar1 >> 5;
  }
  local_12 = (undefined1)uVar1;
  local_28 = 6;
  local_30 = param_1;
  local_2c = param_2;
  FUN_01982524(local_4c,&local_30);
  uVar2 = 0;
  if (local_4c[0] == '\t') {
    uVar2 = local_48;
  }
  return CONCAT44(local_44,uVar2);
}

