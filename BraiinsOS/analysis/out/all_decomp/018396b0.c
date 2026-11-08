// FUN_018396b0 @ 018396b0 size=676 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_018396b0(int param_1,uint *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint local_24 [2];
  
  local_24[0] = DAT_018ddaf8;
  if ((param_2 <= &uStack_28 || local_24 <= param_2) &&
     ((&uStack_28 <= param_2 || (param_2 + 1 <= &uStack_28)))) {
    iVar4 = param_1 + (-param_1 & 0xfU);
    puVar3 = (uint *)((int)param_2 + 3);
    uVar6 = *param_2;
    *(uint *)(param_1 + (-param_1 & 0xfU)) = uVar6 & 0x3ffffff;
    *(uint *)(iVar4 + 4) = uVar6 & 0x3ffffff;
    if ((puVar3 <= &uStack_2c || &uStack_28 <= puVar3) &&
       ((&uStack_2c <= puVar3 || ((uint *)((int)param_2 + 7U) <= &uStack_2c)))) {
      uVar6 = *(uint *)((int)param_2 + 3) >> 2 & 0x3ffff03;
      puVar3 = (uint *)((int)param_2 + 6);
      *(uint *)(iVar4 + 8) = uVar6;
      *(uint *)(iVar4 + 0xc) = uVar6;
      if ((&uStack_2c <= puVar3 || puVar3 <= &uStack_30) &&
         ((&uStack_30 <= puVar3 || ((uint *)((int)param_2 + 10U) <= &uStack_30)))) {
        puVar3 = (uint *)((int)param_2 + 9);
        uVar6 = *(uint *)((int)param_2 + 6) >> 4 & 0x3ffc0ff;
        *(uint *)(iVar4 + 0x10) = uVar6;
        *(uint *)(iVar4 + 0x14) = uVar6;
        if ((&uStack_30 <= puVar3 || puVar3 <= &uStack_34) &&
           ((&uStack_34 <= puVar3 || ((uint *)((int)param_2 + 0xdU) <= &uStack_34)))) {
          uVar6 = *(uint *)((int)param_2 + 9) >> 6 & 0x3f03fff;
          puVar3 = param_2 + 3;
          *(uint *)(iVar4 + 0x18) = uVar6;
          *(uint *)(iVar4 + 0x1c) = uVar6;
          if ((&uStack_34 <= puVar3 || puVar3 <= &uStack_38) &&
             ((puVar5 = param_2 + 4, &uStack_38 <= puVar3 || (puVar5 <= &uStack_38)))) {
            uVar6 = (param_2[3] & 0xfffffff) >> 8;
            *(uint *)(iVar4 + 0x20) = uVar6;
            *(uint *)(iVar4 + 0x24) = uVar6;
            FUN_016dd606(iVar4 + 0x30,0,0x28);
            FUN_0183a638(iVar4 + 0x90,iVar4,iVar4);
            FUN_0183a638(iVar4 + 0xc0,iVar4 + 0x90,iVar4 + 0x90,&DAT_00563ce0);
            puVar3 = (uint *)(param_1 + 0x194);
            if (puVar3 < puVar5) {
              if ((uint *)(param_1 + 0x1a4U) <= puVar5) {
LAB_018398d0:
                uVar7 = param_2[5];
                uVar6 = param_2[6];
                uVar2 = param_2[7];
                *(uint *)(param_1 + 0x194) = param_2[4];
                *(uint *)(param_1 + 0x198) = uVar7;
                *(uint *)(param_1 + 0x19c) = uVar6;
                *(uint *)(param_1 + 0x1a0) = uVar2;
                *(undefined4 *)(param_1 + 400) = 0;
                if (local_24[0] != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
                  FUN_016d2b78();
                }
                return 0;
              }
            }
            else if ((puVar3 == puVar5) || (param_2 + 8 <= puVar3)) goto LAB_018398d0;
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x183994c);
  (*pcVar1)();
}

