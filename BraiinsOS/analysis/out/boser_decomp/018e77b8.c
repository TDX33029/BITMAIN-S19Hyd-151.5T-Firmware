// FUN_018e77b8 @ 018e77b8 size=492 calls_out=11 calls_in=0
// strings: 

void FUN_018e77b8(undefined1 *param_1,int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_6c [16];
  undefined4 local_5c;
  undefined1 auStack_54 [16];
  undefined4 local_44;
  ushort local_3c [8];
  undefined4 local_2c;
  
  FUN_01931148(auStack_6c,&DAT_0056a6b8);
  puVar1 = param_1;
  do {
    if (puVar1 == param_1 + param_2 * 0x14) {
      FUN_01931818(auStack_6c);
      return;
    }
    uVar7 = FUN_018eb4c8(puVar1);
    FUN_0190d8e0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),local_5c);
    local_3c[0] = CONCAT11(local_3c[0]._1_1_,0x19);
    FUN_01931148(auStack_54,local_3c,local_5c);
    uVar5 = local_44;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*puVar1) {
    case 0:
      FUN_018e7c6c(*(undefined4 *)(puVar1 + 8),*(undefined4 *)(puVar1 + 0xc),local_44);
      break;
    case 3:
      FUN_01935d5c(*(undefined4 *)(puVar1 + 8),*(undefined4 *)(puVar1 + 0xc),local_44);
      break;
    case 4:
      uVar5 = *(undefined4 *)(puVar1 + 8);
      uVar3 = *(undefined4 *)(puVar1 + 0xc);
      FUN_01931148(local_3c,&DAT_01d23400,local_44);
      FUN_01935d5c(uVar5,uVar3,local_2c);
      FUN_01931818(local_3c);
      break;
    case 5:
      uVar2 = FUN_0190abbc(*(undefined2 *)(puVar1 + 0x10),*(undefined2 *)(puVar1 + 0x12));
      local_3c[0] = (ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff;
      FUN_01ac6cbc(uVar5,local_3c,2);
      uVar3 = *(undefined4 *)(puVar1 + 8);
      uVar2 = *(uint *)(puVar1 + 0xc);
      local_3c[0] = (ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff;
      FUN_01ac6cbc(uVar5,local_3c,2);
      goto LAB_018e7958;
    case 6:
      local_3c[0] = *(ushort *)(puVar1 + 2) << 8 | *(ushort *)(puVar1 + 2) >> 8;
      FUN_01ac6cbc(local_44,local_3c,2);
      break;
    case 9:
    case 10:
      FUN_0190ce64(puVar1[1],puVar1[2],local_44);
      break;
    case 0xb:
      FUN_0190cfbc(*(undefined2 *)(puVar1 + 2),*(undefined2 *)(puVar1 + 4),local_44);
      break;
    case 0xc:
    case 0xd:
    case 0x10:
      uVar3 = *(undefined4 *)(puVar1 + 8);
      uVar2 = *(uint *)(puVar1 + 0xc);
LAB_018e7958:
      FUN_01ac6cbc(uVar5,uVar3,uVar2);
      break;
    case 0xf:
      iVar4 = *(int *)(puVar1 + 8);
      iVar6 = *(int *)(puVar1 + 0xc);
      FUN_01931148(local_3c,&DAT_0056a6b8,local_44);
      uVar5 = local_2c;
      for (iVar6 = iVar6 * 0x3c; iVar6 != 0; iVar6 = iVar6 + -0x3c) {
        FUN_018ee864(iVar4,uVar5);
        iVar4 = iVar4 + 0x3c;
      }
      FUN_01931818(local_3c);
    }
    FUN_01931818(auStack_54);
    puVar1 = puVar1 + 0x14;
  } while( true );
}

