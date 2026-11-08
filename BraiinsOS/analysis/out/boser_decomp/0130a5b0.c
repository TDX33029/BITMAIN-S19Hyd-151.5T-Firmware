// FUN_0130a5b0 @ 0130a5b0 size=600 calls_out=1 calls_in=5
// strings: 

void FUN_0130a5b0(uint *param_1,byte *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int local_28;
  
  uVar2 = *param_1;
  uVar4 = ~param_1[2];
  *param_1 = uVar2 + param_3;
  param_1[1] = param_1[1] + (uint)CARRY4(uVar2,param_3);
  if (0x3f < param_3) {
    iVar1 = 0;
    iVar3 = 8;
    local_28 = 0;
    while( true ) {
      uVar2 = param_3 + iVar1;
      if (uVar2 < 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0xf,uVar2,&DAT_01ce4bc0);
      }
      uVar4 = *(uint *)(&DAT_0042d124 + (uint)param_2[0xe - iVar1] * 4) ^
              *(uint *)(&DAT_0042cd24 + (uint)param_2[0xf - iVar1] * 4) ^
              *(uint *)(&DAT_0042d524 + (uint)param_2[0xd - iVar1] * 4) ^
              *(uint *)(&DAT_0042d924 + (uint)param_2[0xc - iVar1] * 4) ^
              *(uint *)(&DAT_0042dd24 + (uint)param_2[0xb - iVar1] * 4) ^
              *(uint *)(&DAT_0042e124 + (uint)param_2[10 - iVar1] * 4) ^
              *(uint *)(&DAT_0042e524 + (uint)param_2[9 - iVar1] * 4) ^
              *(uint *)(&DAT_0042e924 + (uint)param_2[iVar3] * 4) ^
              *(uint *)(&DAT_0042ed24 + (uint)param_2[7 - iVar1] * 4) ^
              *(uint *)(&DAT_0042f124 + (uint)param_2[6 - iVar1] * 4) ^
              *(uint *)(&DAT_0042f524 + (uint)param_2[5 - iVar1] * 4) ^
              *(uint *)(&DAT_0042f924 + (uint)param_2[4 - iVar1] * 4) ^
              *(uint *)(&DAT_0042fd24 + ((uint)param_2[3 - iVar1] ^ uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_00430124 + ((uVar4 & 0xffffff) >> 0x10 ^ (uint)param_2[2 - iVar1]) * 4)
              ^ *(uint *)(&DAT_00430524 + ((uVar4 & 0xffff) >> 8 ^ (uint)param_2[1 - iVar1]) * 4) ^
              *(uint *)(&DAT_00430924 + (uVar4 & 0xff ^ (uint)param_2[iVar3 + -8]) * 4);
      local_28 = local_28 + 1;
      if ((local_28 == 4) && (local_28 = 0, (param_3 - 0x10) + iVar1 < 0x40)) break;
      iVar3 = iVar3 + 0x10;
      iVar1 = iVar1 + -0x10;
    }
    param_3 = uVar2 - 0x10;
    param_2 = param_2 + (0x10 - iVar1);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar4 = *(uint *)(&DAT_0042cd24 + ((*param_2 ^ uVar4) & 0xff) * 4) ^ uVar4 >> 8;
    param_2 = param_2 + 1;
  }
  param_1[2] = ~uVar4;
  return;
}

