// FUN_014f9a20 @ 014f9a20 size=176 calls_out=4 calls_in=2
// strings: 

void FUN_014f9a20(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  char local_16;
  undefined4 local_15;
  undefined1 uStack_11;
  
  uVar3 = *(undefined4 *)(param_2 + 8);
  FUN_014f9820(&local_16);
  if (((local_16 == '\x01') && (iVar2 = FUN_014f96bc(param_2), iVar2 == 0x2f)) &&
     (uVar4 = FUN_014f9708(param_2,10,2,0x21), (uVar4 & 1) != 0)) {
    if (0x20 < ((uint)(uVar4 >> 0x20) & 0xff)) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&uStack_11,&DAT_01cfa52c,&DAT_01cfa564);
    }
    *(undefined4 *)(param_1 + 1) = local_15;
    uVar1 = 1;
    param_1[5] = (char)(uVar4 >> 0x20);
  }
  else {
    *(undefined4 *)(param_2 + 8) = uVar3;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}

