// FUN_016ae1d8 @ 016ae1d8 size=208 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_016ae1d8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_18;
  uint local_14;
  
  local_18 = *param_1;
  local_14 = param_1[1];
  if (local_18 == 0) {
    uVar3 = 2;
    if (1 < *(byte *)(param_1 + 0xae)) goto LAB_016ae268;
  }
  else {
    if (local_18 == 1) {
      if ((char)param_1[0xae] == '\x01') {
LAB_016ae268:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_18,&DAT_018ae9f4,&DAT_018aea2c);
      }
      iVar1 = param_1[0xad];
    }
    else {
      if (param_1[100] == 0) goto LAB_016ae268;
      uVar2 = 0;
      if ((uint)param_1[0x65] <= local_14) goto LAB_016ae25c;
      iVar1 = param_1[0xad] * (local_14 + 2);
    }
    uVar3 = iVar1 + 2;
  }
  if ((uint)param_1[0x6c] <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar3,param_1[0x6c],&DAT_018ae9d4);
  }
  uVar2 = *(undefined4 *)(param_1[0x6b] + uVar3 * 4);
LAB_016ae25c:
  return CONCAT44(uVar2,param_1 + 2);
}

