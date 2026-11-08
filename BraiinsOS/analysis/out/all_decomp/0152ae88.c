// FUN_0152ae88 @ 0152ae88 size=384 calls_out=2 calls_in=1
// strings: 

void FUN_0152ae88(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 uVar10;
  bool bVar11;
  bool bVar12;
  undefined1 *local_38;
  uint local_34;
  uint local_30;
  char local_2c [2];
  short local_2a;
  ushort local_28;
  
  puVar8 = (undefined1 *)*param_2;
  uVar9 = param_2[1];
  if (uVar9 != 0) {
    uVar1 = *puVar8;
    bVar3 = 1;
    local_30 = 1;
    uVar10 = 0;
    switch(uVar1) {
    case 0x14:
      break;
    case 0x15:
      uVar10 = 1;
      break;
    case 0x16:
      uVar10 = 2;
      break;
    case 0x17:
      uVar10 = 3;
      bVar3 = 0;
      break;
    case 0x18:
      uVar10 = 4;
      break;
    default:
      uVar4 = 3;
      goto LAB_0152af64;
    }
    local_38 = puVar8;
    local_34 = uVar9;
    FUN_0152a3fc(local_2c,&local_38);
    if (local_2c[0] == '\x18') {
      if ((local_2a != 9) || (uVar4 = 0x11, (local_28 & 0xff00) == 0x300)) {
        if (local_34 - local_30 < 2) goto LAB_0152af50;
        bVar12 = 0xfffffffc < local_30;
        bVar11 = local_30 == 0xfffffffd;
        if (local_30 < 0xfffffffe) {
          bVar12 = local_34 <= local_30 + 2;
          bVar11 = local_30 + 2 == local_34;
        }
        if (bVar12 && !bVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c();
        }
        uVar2 = *(ushort *)(local_38 + local_30);
        uVar4 = 7;
        if (!(bool)(bVar3 & uVar2 == 0)) {
          uVar5 = uVar2 & 0xff;
          uVar6 = uVar5 << 8 | (uint)(uVar2 >> 8);
          uVar4 = 10;
          if (uVar5 >> 3 < 9) {
            uVar5 = uVar6 + 5;
            if (uVar5 <= uVar9) {
              param_2[1] = uVar9 - uVar5;
              *param_2 = puVar8 + uVar5;
              param_1[2] = puVar8 + 5;
              param_1[3] = uVar6;
              iVar7 = param_2[2];
              *(undefined1 *)((int)param_1 + 0x11) = uVar1;
              *(undefined1 *)(param_1 + 4) = uVar10;
              *(ushort *)((int)param_1 + 6) = local_28;
              *(short *)(param_1 + 1) = local_2a;
              *param_1 = 0x80000029;
              param_2[2] = iVar7 + uVar5;
              return;
            }
            goto LAB_0152af50;
          }
        }
      }
LAB_0152af64:
      *(undefined1 *)(param_1 + 1) = uVar4;
      *param_1 = 0x80000016;
      return;
    }
  }
LAB_0152af50:
  *param_1 = 0x8000002a;
  return;
}

