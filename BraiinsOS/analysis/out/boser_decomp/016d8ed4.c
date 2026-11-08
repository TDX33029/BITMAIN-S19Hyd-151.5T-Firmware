// FUN_016d8ed4 @ 016d8ed4 size=608 calls_out=13 calls_in=1
// strings: 

void FUN_016d8ed4(undefined4 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int local_2dc;
  undefined1 auStack_2d8 [88];
  undefined1 auStack_280 [88];
  int local_228;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  int local_218;
  int iStack_214;
  int iStack_210;
  int iStack_20c;
  int iStack_208;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined1 auStack_168 [100];
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f0;
  int local_ec;
  undefined1 auStack_98 [116];
  
  local_2dc = FUN_016d4a28(param_2);
  if (local_2dc == 0x5d) {
    local_228 = *param_3;
    iStack_224 = param_3[1];
    iStack_220 = param_3[2];
    iStack_21c = param_3[3];
    local_218 = param_3[4];
    iStack_214 = param_3[5];
    iStack_210 = param_3[6];
    iStack_20c = param_3[7];
    iStack_208 = param_3[8];
    FUN_016ebfd0(auStack_2d8);
    iVar7 = *param_2;
    FUN_016d9bb8(auStack_280,iVar7,auStack_2d8);
    if (*(int *)(iVar7 + 0x20) == 0) {
      *(undefined4 *)(iVar7 + 0x20) = 0xffffffff;
      if (*(int *)(iVar7 + 0x2c) == 0) {
        puVar5 = &DAT_01d0a0f8;
        puVar3 = &DAT_004cfed6;
        local_228 = 0x11000a;
        uVar4 = 0x4d;
      }
      else {
        iVar2 = *(int *)(iVar7 + 0x2c) + -1;
        iVar6 = iVar2 * 0x98 + *(int *)(iVar7 + 0x28);
        *(int *)(iVar7 + 0x2c) = iVar2;
        FUN_01bed4e2(&local_228,iVar6,0x98);
        if (local_228 == 0x110009) {
          uVar4 = 0x33;
          puVar5 = &DAT_01d0a108;
          puVar3 = &DAT_004cfefc;
        }
        else {
          if (local_228 != 0x11000a) {
            local_190 = *(undefined4 *)(iVar6 + 0x74);
            uStack_18c = *(undefined4 *)(iVar6 + 0x78);
            uStack_188 = *(undefined4 *)(iVar6 + 0x7c);
            uStack_184 = *(undefined4 *)(iVar6 + 0x80);
            local_180 = *(undefined4 *)(iVar6 + 0x84);
            uStack_17c = *(undefined4 *)(iVar6 + 0x88);
            uStack_178 = *(undefined4 *)(iVar6 + 0x8c);
            uStack_174 = *(undefined4 *)(iVar6 + 0x90);
            uStack_170 = *(undefined4 *)(iVar6 + 0x94);
            FUN_01bed4e2(auStack_168,iVar6,0x74);
            FUN_016d4fe8(param_2);
            local_104 = *(undefined4 *)(iVar7 + 0x50);
            uStack_100 = *(undefined4 *)(iVar7 + 0x54);
            uStack_fc = *(undefined4 *)(iVar7 + 0x58);
            FUN_016d7fdc(auStack_168);
            FUN_01bed4e2(auStack_168,auStack_280,0x58);
            if (*(int *)(iVar7 + 0x2c) == 0) {
              FUN_01bed4e2(param_1,auStack_168,0x74);
              FUN_016d8104(&local_190);
            }
            else {
              FUN_01bed4e2(auStack_98,auStack_168,0x74);
              iVar2 = thunk_FUN_01be5118(0x74);
              if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(4,0x74);
              }
              FUN_01bed4e2(iVar2,auStack_168,0x74);
              local_f0 = 0x110006;
              local_ec = iVar2;
              FUN_016eb8e0(&local_190,&local_f0);
              param_1[1] = local_190;
              param_1[2] = uStack_18c;
              param_1[3] = uStack_188;
              param_1[4] = uStack_184;
              param_1[5] = local_180;
              param_1[6] = uStack_17c;
              param_1[7] = uStack_178;
              param_1[8] = uStack_174;
              param_1[9] = uStack_170;
              *param_1 = 0x110009;
            }
            *(int *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x20) + 1;
            return;
          }
          uVar4 = 0x4d;
          puVar5 = &DAT_01d0a0f8;
          puVar3 = &DAT_004cfed6;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(puVar3,uVar4,puVar5);
    }
    FUN_01306fc8(&DAT_01d0a0e8);
  }
  else {
    FUN_016f4e14(&local_2dc,&DAT_0056eb18,&DAT_01d0a118);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x16d9134);
  (*pcVar1)();
}

