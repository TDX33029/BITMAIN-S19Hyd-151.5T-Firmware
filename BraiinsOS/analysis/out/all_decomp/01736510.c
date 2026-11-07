// FUN_01736510 @ 01736510 size=624 calls_out=18 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c

undefined4 *
FUN_01736510(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 auStack_208 [68];
  undefined1 auStack_1c4 [68];
  undefined1 auStack_180 [68];
  undefined1 auStack_13c [68];
  undefined1 auStack_f8 [204];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  *param_2 = 0;
  iVar1 = FUN_0172c608(param_1,0);
  uVar2 = FUN_01714eb4();
  if (uVar2 < 0xa0) {
    FUN_016e9cd0(0x1a,0,0x70,"/aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c",0xa6);
  }
  else {
    iVar3 = FUN_01736458(param_1,auStack_f8,param_4);
    if (iVar3 != 0) {
      iVar3 = FUN_0172e928(param_1,auStack_208,auStack_f8);
      if (iVar3 != 0) {
        iVar3 = FUN_01733208(param_1,auStack_208);
        if (iVar3 == 0) {
          FUN_01733564(param_1,auStack_1c4,auStack_208);
          FUN_017335e0(param_1,auStack_1c4,param_3,auStack_1c4);
          puVar4 = (undefined4 *)FUN_0172c608(param_1);
          uVar5 = FUN_01714eb4();
          uVar2 = uVar5 + 7 >> 3;
          if (param_6 <= uVar2) {
            uVar2 = param_6;
          }
          FUN_01714f80(auStack_180,puVar4[1],param_5);
          if (uVar5 < uVar2 << 3) {
            FUN_0171e8ec(auStack_180,auStack_180,8 - (uVar5 & 7),puVar4[1]);
          }
          FUN_0171ae58(auStack_180,0,*puVar4,auStack_13c,puVar4[1]);
          FUN_017334ac(param_1,auStack_1c4,auStack_1c4,auStack_180);
          FUN_01733634(param_1,auStack_180,param_4);
          FUN_0173358c(param_1,auStack_180,auStack_180);
          FUN_017335e0(param_1,auStack_1c4,auStack_1c4,auStack_180);
          iVar3 = FUN_01733208(param_1,auStack_1c4);
          if (iVar3 == 0) {
            puVar4 = (undefined4 *)FUN_0172bfe0();
            if (puVar4 != (undefined4 *)0x0) {
              iVar3 = FUN_01714ac8(*puVar4,auStack_208,*(undefined4 *)(iVar1 + 4));
              if ((iVar3 != 0) &&
                 (iVar1 = FUN_01714ac8(puVar4[1],auStack_1c4,*(undefined4 *)(iVar1 + 4)), iVar1 != 0
                 )) goto LAB_017366ec;
            }
            FUN_0172bf9c(puVar4);
            goto LAB_017366e8;
          }
        }
        *param_2 = 1;
      }
    }
  }
LAB_017366e8:
  puVar4 = (undefined4 *)0x0;
LAB_017366ec:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return puVar4;
}

