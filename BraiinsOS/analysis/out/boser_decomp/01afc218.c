// FUN_01afc218 @ 01afc218 size=400 calls_out=5 calls_in=1
// strings: /aws-lc/crypto/bn_extra/convert.c | decode_hex | /aws-lc/crypto/bn_extra/convert.c | decode_hex | /aws-lc/crypto/bn_extra/convert.c | i <= bn->dmax

void FUN_01afc218(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  uint extraout_r1;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  byte local_2d;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  if (param_3 < 0x20000000) {
    uVar9 = FUN_01b2b690(param_1,param_3 << 2,&PTR_01d3b2b0,0);
    uVar4 = (uint)((ulonglong)uVar9 >> 0x20);
    if ((int)uVar9 != 0) {
      iVar5 = 0;
      for (; 0 < param_3; param_3 = param_3 - iVar8) {
        iVar8 = param_3;
        if (7 < param_3) {
          iVar8 = 8;
        }
        uVar7 = 0;
        puVar6 = (undefined1 *)(param_2 + param_3) + -iVar8;
        do {
          local_2d = 0;
          iVar2 = FUN_01b6b838(&local_2d,*puVar6);
          if (iVar2 == 0) {
            uVar1 = 0x55;
            pcVar3 = "0";
            goto LAB_01afc328;
          }
          uVar4 = (uint)local_2d;
          puVar6 = puVar6 + 1;
          uVar7 = uVar4 | uVar7 << 4;
        } while (puVar6 != (undefined1 *)(param_2 + param_3));
        *(uint *)(*param_1 + iVar5 * 4) = uVar7;
        iVar5 = iVar5 + 1;
      }
      if (param_1[2] < iVar5) {
        uVar1 = 0x5d;
        pcVar3 = "i <= bn->dmax";
LAB_01afc328:
                    /* WARNING: Subroutine does not return */
        FUN_01be3310(pcVar3,"/aws-lc/crypto/bn_extra/convert.c",uVar1,"decode_hex");
      }
      param_1[1] = iVar5;
      uVar1 = 1;
      goto LAB_01afc280;
    }
  }
  else {
    FUN_01b053d4(3,0,0x66,"/aws-lc/crypto/bn_extra/convert.c",0x3f);
    uVar4 = extraout_r1;
  }
  uVar1 = 0;
LAB_01afc280:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,uVar4,local_2c ^ DAT_01d53560,0);
  }
  return;
}

