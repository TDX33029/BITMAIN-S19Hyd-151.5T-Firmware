// FUN_0111e0cc @ 0111e0cc size=132 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_0111e0cc(char *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined1 uStack_11;
  
  if (*param_1 != '\x03') {
    uVar1 = FUN_00f36124(param_1,&uStack_11,&DAT_01887598);
    FUN_01111ad8(param_1);
    return CONCAT44(uVar1,1);
  }
  local_20 = *(int *)(param_1 + 4);
  uStack_1c = *(undefined4 *)(param_1 + 8);
  bVar2 = local_20 == -0x80000000;
  if (!bVar2) {
    local_18 = *(undefined4 *)(param_1 + 0xc);
    uStack_1c = FUN_0111e16c(&local_20);
  }
  return CONCAT44(uStack_1c,(uint)bVar2);
}

