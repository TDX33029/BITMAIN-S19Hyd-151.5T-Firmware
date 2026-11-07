// FUN_01447fc0 @ 01447fc0 size=632 calls_out=3 calls_in=2
// strings: 

void FUN_01447fc0(undefined4 *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  uint uVar7;
  byte *extraout_r2;
  byte *extraout_r2_00;
  byte *extraout_r2_01;
  byte *pbVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  
  do {
    uVar3 = *(uint *)(param_2 + 0x5c);
    if (uVar3 < 4) goto LAB_01447ff0;
    pbVar5 = *(byte **)(param_2 + 0x58);
    puVar4 = (undefined1 *)(uint)*pbVar5;
    if ((char)*pbVar5 < '\0') {
      pbVar8 = (byte *)(uint)pbVar5[1];
      if (puVar4 + -0xc2 < (undefined1 *)0x1e) {
        pbVar8 = (byte *)(int)(char)pbVar5[1];
        if (-0x41 < (int)pbVar8) goto LAB_01447ff0;
        *(byte **)(param_2 + 0x58) = pbVar5 + 2;
        *(uint *)(param_2 + 0x5c) = uVar3 - 2;
        puVar4 = (undefined1 *)((uint)pbVar8 & 0x3f | ((uint)puVar4 & 0x1f) << 6);
      }
      else {
        bVar1 = pbVar5[2];
        if (puVar4 < (undefined1 *)0xf0) {
          if ((byte)((&DAT_00532b80)[(int)puVar4] & pbVar8[0x532b00] | bVar1 >> 6) == 2) {
            *(byte **)(param_2 + 0x58) = pbVar5 + 3;
            *(uint *)(param_2 + 0x5c) = uVar3 - 3;
            puVar4 = (undefined1 *)
                     (((uint)puVar4 & 0xf) << 0xc | ((uint)pbVar8 & 0x3f) << 6 | bVar1 & 0x3f);
            goto LAB_01448028;
          }
LAB_01447ff0:
          puVar4 = (undefined1 *)FUN_01ad0b3c((undefined4 *)(param_2 + 0x58));
          pbVar8 = extraout_r2;
        }
        else {
          bVar2 = pbVar5[3];
          if (((uint)(byte)((&DAT_00532b80)[(int)puVar4] & pbVar8[0x532b00] | bVar1 >> 6) |
              (bVar2 & 0xc0) << 2) != 0x202) goto LAB_01447ff0;
          *(byte **)(param_2 + 0x58) = pbVar5 + 4;
          *(uint *)(param_2 + 0x5c) = uVar3 - 4;
          puVar4 = (undefined1 *)
                   (((uint)puVar4 & 7) << 0x12 | ((uint)pbVar8 & 0x3f) << 0xc | (bVar1 & 0x3f) << 6
                   | bVar2 & 0x3f);
        }
        if (puVar4 == &DAT_00110000) {
          *param_1 = &DAT_00110000;
          return;
        }
      }
    }
    else {
      pbVar8 = pbVar5 + 1;
      *(byte **)(param_2 + 0x58) = pbVar8;
      *(uint *)(param_2 + 0x5c) = uVar3 - 1;
    }
LAB_01448028:
    if (puVar4 < *(undefined1 **)(param_2 + 0x8c)) {
      *param_1 = puVar4;
      *(undefined1 *)(param_1 + 2) = 0;
      param_1[1] = 0;
      return;
    }
    if ((*(int *)(param_2 + 0x88) == 0) ||
       (FUN_01451358(param_1,*(undefined1 *)(param_2 + 0x90),puVar4), pbVar8 = extraout_r2_00,
       (undefined1 *)*param_1 == &DAT_00110000)) {
      puVar10 = *(undefined4 **)(param_2 + 0x60);
      puVar6 = (undefined1 *)0xffff;
      if (*(char *)(puVar10 + 0xb) != '\0') {
        puVar6 = (undefined1 *)0xfff;
      }
      if (puVar6 < puVar4) {
        if (puVar4 < (undefined1 *)puVar10[7]) {
          uVar3 = FUN_01449040(puVar10,puVar4);
          pbVar8 = extraout_r2_01;
        }
        else {
          uVar3 = puVar10[5] - 2;
        }
      }
      else if ((uint)puVar4 >> 6 < (uint)puVar10[2]) {
        uVar3 = ((uint)puVar4 & 0x3f) + (uint)*(ushort *)(puVar10[1] + ((uint)puVar4 >> 6) * 2);
      }
      else {
        uVar3 = puVar10[5] - 1;
      }
      uVar7 = puVar10[5];
      *(undefined1 *)(param_1 + 2) = 0;
      uVar9 = *puVar10;
      if (uVar3 < uVar7) {
        pbVar8 = (byte *)puVar10[4];
      }
      *param_1 = puVar4;
      if (uVar3 < uVar7) {
        uVar9 = *(undefined4 *)(pbVar8 + uVar3 * 4);
      }
      param_1[1] = uVar9;
      return;
    }
    if (param_1[1] != -1) {
      return;
    }
    if (*(char *)(param_2 + 0x91) != '\x01') {
      if (*(char *)(param_2 + 0x91) != '\0') {
        *(undefined1 *)(param_1 + 2) = 0;
        *param_1 = puVar4;
        param_1[1] = 0xfffd;
      }
      return;
    }
  } while( true );
}

