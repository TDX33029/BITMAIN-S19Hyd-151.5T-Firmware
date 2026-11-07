// FUN_01b6b8b8 @ 01b6b8b8 size=284 calls_out=5 calls_in=3
// strings: 

byte * FUN_01b6b8b8(int param_1,uint *param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  char local_2e;
  byte local_2d;
  int local_2c;
  
  local_2c = DAT_01d53560;
  if ((param_2 != (uint *)0x0 && param_1 != 0) &&
     (uVar1 = FUN_01b6b78c(param_1,0x7fff,&PTR_01d3b2b0,0), (uVar1 & 1) == 0)) {
    uVar1 = uVar1 >> 1;
    pbVar2 = (byte *)FUN_01b6b0a8(uVar1);
    if (pbVar2 != (byte *)0x0) {
      puVar4 = (undefined1 *)(param_1 + 1);
      for (pbVar5 = pbVar2; pbVar5 != pbVar2 + uVar1; pbVar5 = pbVar5 + 1) {
        iVar3 = FUN_01b6b838(&local_2e,puVar4[-1]);
        if ((iVar3 == 0) || (iVar3 = FUN_01b6b838(&local_2d,*puVar4), iVar3 == 0)) {
          FUN_01b6b1c4(pbVar2);
          goto LAB_01b6b960;
        }
        puVar4 = puVar4 + 2;
        *pbVar5 = local_2d | local_2e << 4;
      }
      *param_2 = uVar1;
      goto LAB_01b6b964;
    }
  }
LAB_01b6b960:
  pbVar2 = (byte *)0x0;
LAB_01b6b964:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return pbVar2;
}

