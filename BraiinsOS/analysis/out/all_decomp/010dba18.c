// FUN_010dba18 @ 010dba18 size=636 calls_out=3 calls_in=2
// strings: 

void FUN_010dba18(undefined4 *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  do {
    uVar3 = *(uint *)(param_2 + 0x5c);
    if (uVar3 < 4) goto LAB_010dba48;
    pbVar5 = *(byte **)(param_2 + 0x58);
    puVar4 = (undefined1 *)(uint)*pbVar5;
    if ((char)*pbVar5 < '\0') {
      bVar1 = pbVar5[1];
      uVar8 = (uint)bVar1;
      if (puVar4 + -0xc2 < (undefined1 *)0x1e) {
        if (-0x41 < (char)bVar1) goto LAB_010dba48;
        *(byte **)(param_2 + 0x58) = pbVar5 + 2;
        *(uint *)(param_2 + 0x5c) = uVar3 - 2;
        puVar4 = (undefined1 *)((int)(char)bVar1 & 0x3fU | ((uint)puVar4 & 0x1f) << 6);
      }
      else {
        bVar1 = pbVar5[2];
        if (puVar4 < (undefined1 *)0xf0) {
          if ((byte)((&DAT_00418a40)[(int)puVar4] & (&DAT_004189c0)[uVar8] | bVar1 >> 6) == 2) {
            *(byte **)(param_2 + 0x58) = pbVar5 + 3;
            *(uint *)(param_2 + 0x5c) = uVar3 - 3;
            puVar4 = (undefined1 *)
                     (((uint)puVar4 & 0xf) << 0xc | (uVar8 & 0x3f) << 6 | bVar1 & 0x3f);
          }
          else {
LAB_010dba48:
            puVar4 = (undefined1 *)FUN_016bd87c((undefined4 *)(param_2 + 0x58));
            if (puVar4 == &DAT_00110000) {
              *param_1 = &DAT_00110000;
              return;
            }
          }
        }
        else {
          bVar2 = pbVar5[3];
          if (((uint)(byte)((&DAT_00418a40)[(int)puVar4] & (&DAT_004189c0)[uVar8] | bVar1 >> 6) |
              (bVar2 & 0xc0) << 2) != 0x202) goto LAB_010dba48;
          *(byte **)(param_2 + 0x58) = pbVar5 + 4;
          *(uint *)(param_2 + 0x5c) = uVar3 - 4;
          puVar4 = (undefined1 *)
                   (bVar2 & 0x3f | (bVar1 & 0x3f) << 6 |
                   ((uint)puVar4 & 7) << 0x12 | (uVar8 & 0x3f) << 0xc);
        }
      }
    }
    else {
      *(byte **)(param_2 + 0x58) = pbVar5 + 1;
      *(uint *)(param_2 + 0x5c) = uVar3 - 1;
    }
    if (puVar4 < *(undefined1 **)(param_2 + 0x8c)) {
      *(undefined1 *)(param_1 + 2) = 0;
      *param_1 = puVar4;
      param_1[1] = 0;
      return;
    }
    if ((*(int *)(param_2 + 0x88) == 0) ||
       (FUN_010d3204(param_1,*(undefined1 *)(param_2 + 0x90),puVar4),
       (undefined1 *)*param_1 == &DAT_00110000)) {
      puVar9 = *(undefined4 **)(param_2 + 0x60);
      puVar6 = (undefined1 *)0xffff;
      if (*(char *)(puVar9 + 0xb) != '\0') {
        puVar6 = (undefined1 *)0xfff;
      }
      if (puVar6 < puVar4) {
        if (puVar4 < (undefined1 *)puVar9[7]) {
          uVar3 = FUN_010dcf74(puVar9,puVar4);
        }
        else {
          uVar3 = puVar9[5] - 2;
        }
      }
      else if ((uint)puVar4 >> 6 < (uint)puVar9[2]) {
        uVar3 = ((uint)puVar4 & 0x3f) + (uint)*(ushort *)(puVar9[1] + ((uint)puVar4 >> 6) * 2);
      }
      else {
        uVar3 = puVar9[5] - 1;
      }
      if (uVar3 < (uint)puVar9[5]) {
        puVar9 = (undefined4 *)(puVar9[4] + uVar3 * 4);
      }
      *(undefined1 *)(param_1 + 2) = 0;
      uVar7 = *puVar9;
      *param_1 = puVar4;
      param_1[1] = uVar7;
      return;
    }
    if (param_1[1] != -1) {
      return;
    }
    if (*(char *)(param_2 + 0x91) != '\x01') {
      if (*(char *)(param_2 + 0x91) == '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 2) = 0;
      *param_1 = puVar4;
      param_1[1] = 0xfffd;
      return;
    }
  } while( true );
}

