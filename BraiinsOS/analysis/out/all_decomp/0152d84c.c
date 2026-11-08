// FUN_0152d84c @ 0152d84c size=460 calls_out=1 calls_in=25
// strings: 

void FUN_0152d84c(undefined4 *param_1,byte *param_2,int *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  byte *pbVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  cVar7 = '\x03';
  if (0x17 < *param_2) {
    cVar7 = *param_2 - 0x18;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar7) {
  case '\0':
    uVar6 = param_3[1];
    uVar8 = param_3[2];
    if (uVar6 == uVar8) {
      param_1[1] = &DAT_00410f4f;
      param_1[2] = 2;
      *(undefined1 *)param_1 = 0xc;
      return;
    }
    uVar9 = uVar8 + 1;
    param_3[2] = uVar9;
    if (uVar6 <= uVar8) {
LAB_0152d950:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar8,uVar9,uVar6,&DAT_018a78f8);
    }
    uVar6 = (uint)*(byte *)(*param_3 + uVar8);
    if (uVar6 != 0) {
LAB_0152d8e4:
      param_1[1] = uVar6;
      *(undefined1 *)param_1 = 0x18;
      return;
    }
LAB_0152d988:
    uVar5 = *(undefined4 *)(param_2 + 8);
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    *param_1 = *(undefined4 *)(param_2 + 4);
    param_1[1] = uVar5;
    param_1[2] = uVar2;
    return;
  case '\x01':
    uVar6 = param_3[1];
    uVar8 = param_3[2];
    if (1 < uVar6 - uVar8) {
      uVar9 = uVar8 + 2;
      bVar11 = 0xfffffffc < uVar8;
      bVar10 = uVar8 == 0xfffffffd;
      if (uVar8 < 0xfffffffe) {
        bVar11 = uVar6 <= uVar9;
        bVar10 = uVar9 == uVar6;
      }
      param_3[2] = uVar9;
      if (!bVar11 || bVar10) {
        param_1[1] = (*(ushort *)(*param_3 + uVar8) & 0xff) << 8 |
                     (uint)(*(ushort *)(*param_3 + uVar8) >> 8);
        *(undefined1 *)param_1 = 0x18;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar8,uVar9,uVar6,&DAT_018a78f8);
    }
    break;
  case '\x02':
    uVar6 = param_3[1];
    uVar8 = param_3[2];
    if (1 < uVar6 - uVar8) {
      uVar9 = uVar8 + 2;
      bVar11 = 0xfffffffc < uVar8;
      bVar10 = uVar8 == 0xfffffffd;
      if (uVar8 < 0xfffffffe) {
        bVar11 = uVar6 <= uVar9;
        bVar10 = uVar9 == uVar6;
      }
      param_3[2] = uVar9;
      if (bVar11 && !bVar10) goto LAB_0152d950;
      uVar1 = *(ushort *)(*param_3 + uVar8);
      if (uVar1 != 0) {
        uVar6 = (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8);
        goto LAB_0152d8e4;
      }
      goto LAB_0152d988;
    }
    break;
  case '\x03':
    uVar6 = param_3[1];
    uVar8 = param_3[2];
    if (2 < uVar6 - uVar8) {
      uVar9 = uVar8 + 3;
      bVar11 = 0xfffffffb < uVar8;
      bVar10 = uVar8 == 0xfffffffc;
      if (uVar8 < 0xfffffffd) {
        bVar11 = uVar6 <= uVar9;
        bVar10 = uVar9 == uVar6;
      }
      param_3[2] = uVar9;
      if (!bVar11 || bVar10) {
        pbVar4 = (byte *)(*param_3 + uVar8);
        uVar6 = (uint)*pbVar4 << 0x10 | (uint)pbVar4[1] << 8 | (uint)pbVar4[2];
        if (*(uint *)(param_2 + 0xc) < uVar6) {
          uVar5 = *(undefined4 *)(param_2 + 4);
          uVar2 = *(undefined4 *)(param_2 + 8);
          *param_1 = *(undefined4 *)param_2;
          param_1[1] = uVar5;
          param_1[2] = uVar2;
          return;
        }
        goto LAB_0152d8e4;
      }
      goto LAB_0152d950;
    }
    puVar3 = &DAT_0040bf71;
    goto LAB_0152d928;
  }
  puVar3 = &DAT_00410f57;
LAB_0152d928:
  param_1[1] = puVar3;
  param_1[2] = 3;
  *(undefined1 *)param_1 = 0xc;
  return;
}

