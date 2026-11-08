// FUN_0166d7ac @ 0166d7ac size=416 calls_out=2 calls_in=2
// strings: 

int FUN_0166d7ac(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  char local_2c;
  
  if (param_1[3] == 0) {
    iVar7 = 0;
  }
  else {
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    local_2c = '\0';
    local_48 = param_1[4];
    local_44 = param_1[5];
    local_30 = &DAT_01d519f0;
    FUN_00b8c814(&local_48,param_2,param_3);
    if (local_2c == '\0') {
      uVar4 = local_48;
    }
    else {
      uVar4 = (local_44 ^ local_3c) * (local_30[1] ^ local_34) ^
              (local_48 ^ local_40) * (*local_30 ^ local_38) ^
              (uint)((ulonglong)(local_44 ^ local_3c) * (ulonglong)(*local_30 ^ local_38) >> 0x20) ^
              (uint)((ulonglong)(local_48 ^ local_40) * (ulonglong)(local_30[1] ^ local_34) >> 0x20)
      ;
    }
    uVar1 = uVar4 >> 0x19;
    iVar5 = *param_1;
    uVar6 = param_1[1];
    iVar9 = 0;
    while( true ) {
      uVar4 = uVar6 & uVar4;
      uVar8 = *(uint *)(iVar5 + uVar4);
      uVar2 = uVar8 ^ uVar1 * 0x1010101;
      for (uVar2 = ~uVar2 & 0x80808080 & uVar2 + 0xfefefeff; uVar2 != 0; uVar2 = uVar2 - 1 & uVar2)
      {
        iVar7 = iVar5 + (uVar4 + ((uint)LZCOUNT(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                                                (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18) >> 3) &
                        uVar6) * -0x10;
        if ((param_3 == *(int *)(iVar7 + -8)) &&
           (iVar3 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar7 + -0xc),param_3), iVar3 == 0))
        {
          iVar7 = iVar7 + -0x10;
          goto LAB_0166d93c;
        }
      }
      iVar7 = 0;
      if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
      iVar9 = iVar9 + 4;
      uVar4 = iVar9 + uVar4;
    }
LAB_0166d93c:
    if (iVar7 != 0) {
      iVar7 = iVar7 + 0xc;
    }
  }
  return iVar7;
}

