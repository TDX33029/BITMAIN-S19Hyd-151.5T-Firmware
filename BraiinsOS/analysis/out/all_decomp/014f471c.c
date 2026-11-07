// FUN_014f471c @ 014f471c size=600 calls_out=10 calls_in=2
// strings: 

void FUN_014f471c(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_640 [248];
  undefined1 auStack_548 [248];
  uint local_450;
  uint uStack_44c;
  uint uStack_448;
  uint uStack_444;
  uint local_440;
  uint local_43c;
  uint local_438;
  uint local_434 [129];
  undefined1 auStack_230 [256];
  undefined1 auStack_130 [256];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  iVar1 = 0x80;
  if (param_4 != 0) {
    iVar1 = 0x100;
  }
  if (iVar1 == param_3 * 8) {
    FUN_016dd606(&local_440,0,0xf4);
    if ((DAT_018dffd8 & 4) == 0) {
      if ((DAT_018dffd8 & 1) == 0) {
        iVar1 = FUN_01835abc(param_2,iVar1);
        if (iVar1 != 0) goto LAB_014f47a4;
        goto LAB_014f47c8;
      }
      iVar1 = FUN_0183be30(param_2,iVar1);
    }
    else {
      iVar1 = FUN_0183a7c0(param_2,iVar1,&local_440);
    }
    if (iVar1 == 0) {
LAB_014f47c8:
      FUN_016dd1aa(auStack_548,&local_440,0xf4);
      FUN_016dd1aa(auStack_640,auStack_548,0xf4);
      if ((DAT_018dffd8 & 4) == 0) {
        if ((DAT_018dffd8 & 1) == 0) {
          local_434[0] = 0;
          local_438 = 0;
          local_43c = 0;
          local_440 = 0;
          FUN_01836ca8(&local_440,&local_450,auStack_640);
        }
        else {
          local_434[0] = 0;
          local_438 = 0;
          local_43c = 0;
          local_440 = 0;
          FUN_0183bb90(&local_440,&local_450,auStack_640);
        }
      }
      else {
        local_434[0] = 0;
        local_438 = 0;
        local_43c = 0;
        local_440 = 0;
        FUN_0183a960(&local_440,&local_450,auStack_640);
      }
      uVar5 = uStack_448 << 0x18 | (uStack_448 >> 8 & 0xff) << 0x10 |
              (uStack_448 >> 0x10 & 0xff) << 8 | uStack_448 >> 0x18;
      uVar4 = uStack_44c << 0x18 | (uStack_44c >> 8 & 0xff) << 0x10 |
              (uStack_44c >> 0x10 & 0xff) << 8 | uStack_44c >> 0x18;
      uVar2 = local_450 << 0x18 | (local_450 >> 8 & 0xff) << 0x10 | (local_450 >> 0x10 & 0xff) << 8
              | local_450 >> 0x18;
      uVar3 = uStack_444 << 0x18 | (uStack_444 >> 8 & 0xff) << 0x10 |
              (uStack_444 >> 0x10 & 0xff) << 8 | uStack_444 >> 0x18;
      local_30 = uVar4;
      local_2c = uVar2;
      local_28 = uVar3;
      local_24 = uVar5;
      FUN_016dd606(&local_440,0,0x100);
      if ((DAT_018dffd8 & 0x20) == 0) {
        if ((DAT_018dffd8 & 1) == 0) {
          local_434[0] = uVar5 << 1 | (uStack_444 & 0xff) >> 7;
          local_438 = uVar3 << 1 | (local_450 & 0xff) >> 7;
          local_440 = uVar4 << 1 | (uStack_448 & 0xff) >> 7;
          local_43c = (uVar2 << 1 | (uStack_44c & 0xff) >> 7) ^ (int)uVar2 >> 0x1f & 0xc2000000U;
        }
        else {
          FUN_0183cca0(&local_440,&local_30);
        }
      }
      else {
        FUN_0183ac50(&local_440,&local_30);
      }
      FUN_016dd1aa(auStack_230,&local_440,0x100);
      FUN_016dd1aa(auStack_130,auStack_548,0xf4);
      FUN_016dd1aa(local_434,auStack_230,0x200);
      *param_1 = 0;
      FUN_016dd1aa(param_1 + 1,&local_440,0x20c);
      return;
    }
  }
LAB_014f47a4:
  *param_1 = 2;
  return;
}

