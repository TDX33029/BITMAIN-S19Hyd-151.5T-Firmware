// FUN_0162b890 @ 0162b890 size=108 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_0162b890(int param_1)

{
  undefined4 extraout_r1;
  uint uVar1;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = param_1 + 1;
  if (uVar1 <= DAT_018d90c4 * 2) {
    uVar1 = DAT_018d90c4 << 1;
  }
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_010d30b4(&local_1c,DAT_018d90c4,DAT_018d90c8,uVar1);
  if (local_1c == 0) {
    DAT_018d90c4 = uVar1;
    DAT_018d90c8 = local_18;
    return CONCAT44(extraout_r1,0x80000001);
  }
  return CONCAT44(local_14,local_18);
}

