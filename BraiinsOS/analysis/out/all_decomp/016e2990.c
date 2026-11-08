// FUN_016e2990 @ 016e2990 size=440 calls_out=6 calls_in=1
// strings: 

undefined4 FUN_016e2990(undefined4 param_1,uint *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int local_30;
  undefined1 auStack_2c [8];
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  uint local_1c [2];
  
  local_1c[0] = DAT_018ddaf8;
  iVar2 = FUN_016e24e4(param_1,auStack_2c,2,0);
  uVar4 = 0;
  if (iVar2 != 0) {
    iVar2 = FUN_016e2894(auStack_2c,&local_30);
    uVar4 = 0;
    if (iVar2 != 0) {
      puVar3 = (undefined1 *)FUN_016e1e04(auStack_2c);
      uVar4 = FUN_016e1e1c(auStack_2c);
      if (uVar4 < 9) {
        uVar7 = 0;
        if (local_30 != 0) {
          uVar7 = 0xff;
        }
        puVar5 = (uint *)FUN_016dd606(&local_24,uVar7,8);
        if ((((uVar4 != 0) && (local_24 = puVar3[uVar4 - 1], uVar4 != 1)) &&
            (local_23 = puVar3[uVar4 - 2], uVar4 != 2)) &&
           (((local_22 = puVar3[uVar4 - 3], uVar4 != 3 && (local_21 = puVar3[uVar4 - 4], uVar4 != 4)
             ) && ((local_20 = puVar3[uVar4 - 5], uVar4 != 5 &&
                   ((local_1f = puVar3[uVar4 - 6], uVar4 != 6 &&
                    (local_1e = puVar3[uVar4 - 7], uVar4 == 8)))))))) {
          local_1d = *puVar3;
        }
        if (((param_2 < puVar5) && (puVar5 < param_2 + 2)) ||
           (puVar5 < param_2 && param_2 < local_1c)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0,0x16e2b44);
          (*pcVar1)();
        }
        uVar7 = 1;
        uVar4 = *puVar5;
        uVar6 = puVar5[1];
        *param_2 = uVar4;
        param_2[1] = uVar6;
        goto LAB_016e29e0;
      }
    }
  }
  uVar7 = 0;
LAB_016e29e0:
  if ((local_1c[0] ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar4,local_1c[0] ^ DAT_018ddaf8,0);
  }
  return uVar7;
}

