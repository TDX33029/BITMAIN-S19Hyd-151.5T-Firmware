// FUN_0166d9a4 @ 0166d9a4 size=500 calls_out=2 calls_in=2
// strings: 

void FUN_0166d9a4(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  char local_2c;
  
  local_48 = param_2[4];
  local_44 = param_2[5];
  local_30 = &DAT_01d519f0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_2c = '\0';
  FUN_00b8c814(&local_48,param_3,param_4);
  if (local_2c == '\0') {
    uVar10 = local_48;
    uVar12 = local_44;
  }
  else {
    uVar1 = (ulonglong)(local_48 ^ local_40) * (ulonglong)(local_30[1] ^ local_34) ^
            (ulonglong)(local_44 ^ local_3c) * (ulonglong)(*local_30 ^ local_38);
    uVar2 = (ulonglong)(local_48 ^ local_40) * (ulonglong)(*local_30 ^ local_38) ^
            (ulonglong)(local_44 ^ local_3c) * (ulonglong)(local_30[1] ^ local_34);
    uVar10 = (uint)uVar2 ^ (uint)(uVar1 >> 0x20);
    uVar12 = (uint)(uVar2 >> 0x20) ^ (uint)uVar1;
  }
  uVar5 = param_2[1];
  iVar7 = *param_2;
  iVar11 = 0;
  uVar8 = uVar10;
  do {
    uVar8 = uVar5 & uVar8;
    uVar9 = *(uint *)(iVar7 + uVar8);
    uVar3 = uVar9 ^ (uVar10 >> 0x19) * 0x1010101;
    for (uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      iVar6 = iVar7 + (uVar8 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                              (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) &
                      uVar5) * -0x28;
      if ((param_4 == *(int *)(iVar6 + -0x20)) &&
         (iVar4 = thunk_FUN_01bed842(param_3,*(undefined4 *)(iVar6 + -0x24),param_4), iVar4 == 0)) {
        param_1[2] = uVar10;
        *param_1 = 0;
        param_1[3] = uVar12;
        param_1[4] = iVar6;
        param_1[5] = param_2;
        return;
      }
    }
    if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) {
      *param_1 = param_3;
      param_1[1] = param_4;
      param_1[2] = uVar10;
      param_1[3] = uVar12;
      param_1[4] = param_2;
      return;
    }
    iVar11 = iVar11 + 4;
    uVar8 = iVar11 + uVar8;
  } while( true );
}

