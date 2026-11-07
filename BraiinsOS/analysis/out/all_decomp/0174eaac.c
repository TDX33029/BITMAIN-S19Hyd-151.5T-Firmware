// FUN_0174eaac @ 0174eaac size=452 calls_out=8 calls_in=4
// strings: 

undefined4
FUN_0174eaac(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 auStack_88 [24];
  uint local_70;
  undefined1 auStack_6c [64];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  FUN_0172aab0(auStack_88,param_2,&PTR_018bc3f4,0);
  uVar2 = FUN_0172a898(param_5);
  if (param_2 != 0) {
    uVar7 = 0;
    uVar5 = param_2;
    do {
      local_70 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                 uVar7 >> 0x18;
      iVar3 = FUN_0173e2d8(auStack_88,param_5,0);
      if (((iVar3 == 0) || (iVar3 = FUN_0172af78(auStack_88,param_3,param_4), iVar3 == 0)) ||
         (iVar3 = FUN_0172af78(auStack_88,&local_70,4), iVar3 == 0)) {
LAB_0174ec60:
        uVar6 = 0;
        goto LAB_0174ec14;
      }
      puVar4 = (undefined1 *)((param_1 + param_2) - uVar5);
      if (uVar5 < uVar2) {
        iVar3 = FUN_0172afb8(auStack_88,auStack_6c,0);
        if (iVar3 == 0) goto LAB_0174ec60;
        if ((((puVar4 < auStack_6c) && (auStack_6c < puVar4 + uVar5)) ||
            ((auStack_6c < puVar4 && (puVar4 < auStack_6c + uVar5)))) || (0x40 < uVar5)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0,0x174ec6c);
          (*pcVar1)();
        }
        FUN_016dd1aa(puVar4,auStack_6c,uVar5);
        break;
      }
      iVar3 = FUN_0172afb8(auStack_88,puVar4,0);
      if (iVar3 == 0) goto LAB_0174ec60;
      uVar7 = uVar7 + 1;
      uVar5 = uVar5 - uVar2;
    } while (uVar5 != 0);
  }
  uVar6 = 1;
LAB_0174ec14:
  FUN_0172aae8(auStack_88);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar6;
}

