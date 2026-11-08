// FUN_015e5d88 @ 015e5d88 size=368 calls_out=6 calls_in=1
// strings: 

uint FUN_015e5d88(int param_1,undefined4 param_2,code *param_3,code *param_4,uint param_5,
                 int param_6)

{
  longlong lVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_1 + 0x2c);
  puVar2 = (uint *)(*param_3)(param_2);
  puVar5 = puVar2 + 8;
  puVar3 = puVar2 + 9;
  if (puVar2[7] == 0x80000000) {
    puVar5 = puVar2 + 0xb;
    puVar3 = puVar2 + 0xc;
  }
  uVar4 = FUN_015e2738(param_1,*puVar5,*puVar3);
  uVar4 = uVar4 & 0xff;
  if (uVar4 == 2) {
    iVar6 = param_1 + 0x24;
    FUN_015e9368(iVar6,(uint)(ushort)puVar2[0xd] << 8);
    FUN_015e9368(iVar6,((uint)*(ushort *)((int)puVar2 + 0x36) << 0x18 |
                       (((uint)*(ushort *)((int)puVar2 + 0x36) | (uint)(byte)puVar2[0xe] << 0xf) >>
                        8 & 0xff) << 0x10) >> 0x10);
    if (param_5 == 0 && param_6 == 0) {
      uVar4 = puVar2[6];
    }
    else {
      lVar1 = (ulonglong)puVar2[6] * 1000 +
              CONCAT44(puVar2[1] - (param_6 + (uint)(*puVar2 < param_5)),*puVar2 - param_5);
      uVar4 = FUN_01bf0ff0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
    }
    FUN_015e93c8(iVar6,uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                       uVar4 >> 0x18);
    FUN_015e9368(iVar6,0);
    uVar7 = *(uint *)(param_1 + 0x2c);
    uVar4 = (*param_4)(param_2,param_1);
    if ((uVar4 & 0xff) == 2) {
      uVar4 = *(uint *)(param_1 + 0x2c);
      if (uVar7 < 2 || uVar4 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar7 - 2,uVar7,uVar4,&DAT_01cfd478);
      }
      *(ushort *)(*(int *)(param_1 + 0x28) + (uVar7 - 2)) =
           (ushort)((uVar4 - uVar7 & 0xff) << 8) | (ushort)(uVar4 - uVar7 >> 8) & 0xff;
      uVar7 = *(uint *)(param_1 + 0x2c);
      if (uVar7 <= *(uint *)(param_1 + 0x20)) {
        return 2;
      }
      uVar4 = 1;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x2c);
    }
    if (uVar8 <= uVar7) {
      *(uint *)(param_1 + 0x2c) = uVar8;
    }
    FUN_015dd568(param_1,uVar8);
  }
  return uVar4;
}

