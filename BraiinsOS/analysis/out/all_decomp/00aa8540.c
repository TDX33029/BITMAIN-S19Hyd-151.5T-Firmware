// FUN_00aa8540 @ 00aa8540 size=96 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_00aa8540(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined1 local_154;
  
  local_170 = *param_2;
  uStack_16c = param_2[1];
  uStack_168 = param_2[2];
  uStack_164 = param_2[3];
  uStack_160 = param_2[4];
  local_154 = 0;
  local_15c = param_1;
  iVar1 = thunk_FUN_016d4a50(0x160);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x160);
  }
  FUN_016dd1aa(iVar1,&local_170,0x160);
  return CONCAT44(&UNK_0186dfa4,iVar1);
}

