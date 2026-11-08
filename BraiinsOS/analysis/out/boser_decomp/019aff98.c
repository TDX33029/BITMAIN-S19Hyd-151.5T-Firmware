// FUN_019aff98 @ 019aff98 size=116 calls_out=2 calls_in=16
// strings: 

undefined4 FUN_019aff98(byte *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  byte *pbStack_4c;
  int iStack_48;
  undefined1 local_44;
  undefined2 local_30;
  undefined1 local_2e;
  byte local_2c [28];
  
  bVar3 = param_2 != 0;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = (uint)*param_1;
  }
  uVar2 = 0;
  if (bVar3) {
    uVar1 = LZCOUNT(uVar1 - 0x2f);
  }
  local_30 = 0x201;
  if (bVar3) {
    uVar1 = uVar1 >> 5;
  }
  local_2e = (undefined1)uVar1;
  local_44 = 6;
  pbStack_4c = param_1;
  iStack_48 = param_2;
  FUN_01982524(local_2c,&pbStack_4c);
  if (local_2c[0] - 7 < 3) {
    uVar2 = FUN_0198294c(&pbStack_4c);
  }
  return uVar2;
}

