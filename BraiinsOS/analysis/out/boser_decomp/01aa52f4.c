// FUN_01aa52f4 @ 01aa52f4 size=348 calls_out=2 calls_in=1
// strings: 

void FUN_01aa52f4(undefined1 *param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int extraout_r1;
  int iVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte *pbVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3d;
  undefined4 local_39;
  undefined1 auStack_35 [21];
  
  FUN_01bed93e(&local_40,0,0x20);
  iVar3 = extraout_r1;
  if ((param_3 & 1) == 0) {
    if (param_3 == 0x40) {
      iVar3 = 0;
      pbVar6 = (byte *)&local_40;
      do {
        puVar2 = (undefined1 *)(uint)*(byte *)(param_2 + iVar3);
        if (((uint)(puVar2 + -0x41) & 0xff) < 6) {
          puVar4 = puVar2 + -0x37;
        }
        else if (((uint)(puVar2 + -0x61) & 0xff) < 6) {
          puVar4 = puVar2 + -0x57;
        }
        else {
          puVar4 = puVar2 + -0x30;
          if (9 < ((uint)puVar4 & 0xff)) goto LAB_01aa5434;
        }
        bVar5 = *(byte *)(param_2 + iVar3 + 1);
        puVar2 = (undefined1 *)(uint)bVar5;
        if (((uint)(puVar2 + -0x41) & 0xff) < 6) {
          bVar5 = bVar5 - 0x37;
        }
        else if (((uint)(puVar2 + -0x61) & 0xff) < 6) {
          bVar5 = bVar5 + 0xa9;
        }
        else {
          bVar5 = (byte)(puVar2 + -0x30);
          if (9 < ((uint)(puVar2 + -0x30) & 0xff)) {
            iVar3 = iVar3 + 1;
            goto LAB_01aa5434;
          }
        }
        iVar3 = iVar3 + 2;
        *pbVar6 = (byte)((int)puVar4 << 4) | bVar5;
        pbVar6 = pbVar6 + 1;
      } while (iVar3 != 0x40);
      *(undefined2 *)(param_1 + 1) = local_40;
      param_1[3] = local_3e;
      FUN_01bed4e2(&local_58,auStack_35,0x15);
      *(undefined4 *)(param_1 + 0xc) = local_58;
      *(undefined4 *)(param_1 + 0x10) = uStack_54;
      *(undefined4 *)(param_1 + 0x14) = uStack_50;
      *(undefined4 *)(param_1 + 0x18) = uStack_4c;
      *(undefined4 *)(param_1 + 0x1c) = uStack_48;
      param_1[0x20] = local_44;
      uVar1 = 0;
      *(undefined4 *)(param_1 + 4) = local_3d;
      *(undefined4 *)(param_1 + 8) = local_39;
      goto LAB_01aa543c;
    }
    puVar2 = (undefined1 *)0x110001;
  }
  else {
    puVar2 = &DAT_00110000;
  }
LAB_01aa5434:
  *(undefined1 **)(param_1 + 4) = puVar2;
  *(int *)(param_1 + 8) = iVar3;
  uVar1 = 1;
LAB_01aa543c:
  *param_1 = uVar1;
  return;
}

