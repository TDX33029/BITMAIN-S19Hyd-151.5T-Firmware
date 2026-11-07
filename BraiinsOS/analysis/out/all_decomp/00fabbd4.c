// FUN_00fabbd4 @ 00fabbd4 size=140 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_00fabbd4(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 & 0xff) < 10) {
    iVar2 = 3;
    uVar1 = param_1;
  }
  else {
    uVar1 = (uint)((short)(param_1 & 0xff) * 0x29) >> 0xc;
    *(undefined2 *)(param_2 + 1) =
         *(undefined2 *)(&DAT_0040f4ca + (param_1 + uVar1 * -100 & 0xff) * 2);
    iVar2 = 1;
  }
  if (((param_1 & 0xff) == 0) || ((uVar1 & 0xff) != 0)) {
    iVar2 = iVar2 + -1;
    *(undefined1 *)(param_2 + iVar2) = (&DAT_0040f4cb)[(uVar1 & 0x7f) * 2];
    return CONCAT44(3 - iVar2,param_2 + iVar2);
  }
  return CONCAT44(3 - iVar2,param_2 + iVar2);
}

