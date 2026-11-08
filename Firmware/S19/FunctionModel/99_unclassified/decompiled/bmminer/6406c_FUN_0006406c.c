// FUN_0006406c @ 0006406c  size=1568  callers=3
// program: bmminer


int * FUN_0006406c(char *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  int local_2c;
  int local_28;
  int local_24;
  
  local_2c = 0;
  if (param_1 == (char *)0x0) {
    FUN_000658a8(2,"src/spec.c",0x1dc,"pattern_start is null or 0");
    return (int *)0x0;
  }
  if (param_2 == (int *)0x0) {
    FUN_000658a8(2,"src/spec.c",0x1dd,"pattern_next is null or 0");
    return (int *)0x0;
  }
  piVar2 = calloc(1,0x2434);
  if (piVar2 == (int *)0x0) {
    piVar2 = __errno_location();
    FUN_000658a8(2,"src/spec.c",0x1e1,"calloc fail, errno[%d]",*piVar2);
    return (int *)0x0;
  }
  cVar1 = *param_1;
  *piVar2 = (int)param_1;
  if (cVar1 == '%') {
    pcVar3 = (char *)((int)piVar2 + 0x1411);
    local_2c = 0;
    iVar4 = __isoc99_sscanf(param_1,"%%%[.0-9-]%n",pcVar3,&local_2c);
    if (iVar4 == 1) {
      piVar2[0x90a] = (int)&LAB_00063eb4;
      piVar2[0x90b] = (int)&LAB_00063e24;
      piVar2[0x90c] = (int)&LAB_00063d94;
      if (*(char *)((int)piVar2 + 0x1411) == '-') {
        piVar2[0x905] = 1;
        pcVar3 = (char *)((int)piVar2 + 0x1412);
      }
      else {
        if (*(char *)((int)piVar2 + 0x1411) == '0') {
          piVar2[0x906] = 1;
        }
        piVar2[0x905] = 0;
      }
      local_28 = 0;
      local_24 = 0;
      __isoc99_sscanf(pcVar3,&DAT_00075fa4);
      pcVar3 = strchr(pcVar3,0x2e);
      if (pcVar3 != (char *)0x0) {
        __isoc99_sscanf(pcVar3,&DAT_00075fac,&local_24);
      }
      piVar2[0x908] = local_28;
      piVar2[0x907] = local_24;
    }
    else {
      piVar2[0x90a] = (int)&LAB_00063638;
      piVar2[0x90b] = (int)&LAB_00063648;
      piVar2[0x90c] = (int)&LAB_00063658;
      local_2c = 1;
    }
    pcVar3 = param_1 + local_2c;
    if (param_1[local_2c] == 'd') {
      if (pcVar3[1] == '(') {
        iVar4 = strncmp(pcVar3,"d()",3);
        if (iVar4 == 0) {
          pcVar3 = pcVar3 + 3;
          piVar2[2] = 0x25204625;
          *(undefined2 *)(piVar2 + 3) = 0x54;
          iVar4 = *piVar2;
        }
        else {
          local_2c = 0;
          iVar6 = __isoc99_sscanf(pcVar3,"d(%[^)])%n",piVar2 + 2,&local_2c);
          iVar4 = *piVar2;
          if (iVar6 == 1) {
            pcVar3 = pcVar3 + local_2c;
          }
          else {
            local_2c = 0;
          }
          if (pcVar3[-1] != ')') {
            FUN_000658a8(2,"src/spec.c",0x211,"in string[%s] can\'t find match \')\'",iVar4);
            goto LAB_000643bc;
          }
        }
      }
      else {
        pcVar3 = pcVar3 + 1;
        piVar2[2] = 0x25204625;
        *(undefined2 *)(piVar2 + 3) = 0x54;
        iVar4 = *piVar2;
      }
      iVar6 = *param_3;
      piVar2[0x403] = iVar6;
      *param_3 = iVar6 + 1;
      piVar2[0x909] = (int)FUN_00063c6c;
      *param_2 = (int)pcVar3;
      piVar2[1] = (int)pcVar3 - iVar4;
    }
    else if (param_1[local_2c] == 'M') {
      local_2c = 0;
      iVar4 = __isoc99_sscanf(pcVar3,"M(%[^)])%n",piVar2 + 0x404,&local_2c);
      if (iVar4 == 1) {
        pcVar3 = pcVar3 + local_2c;
      }
      else {
        local_2c = 0;
        iVar4 = strncmp(pcVar3,"M()",3);
        if (iVar4 == 0) {
          pcVar3 = pcVar3 + 3;
          local_2c = 3;
        }
      }
      if (pcVar3[-1] != ')') {
        FUN_000658a8(2,"src/spec.c",0x22a,"in string[%s] can\'t find match \')\'",*piVar2);
LAB_000643bc:
        FUN_00064008(piVar2);
        return (int *)0x0;
      }
      piVar2[1] = (int)pcVar3 - *piVar2;
      *param_2 = (int)pcVar3;
      piVar2[0x909] = (int)&LAB_00063bf8;
    }
    else {
      iVar4 = strncmp(pcVar3,"ms",2);
      iVar6 = *piVar2;
      if (iVar4 == 0) {
        piVar2[1] = (int)(pcVar3 + 2) - iVar6;
        *param_2 = (int)(pcVar3 + 2);
        piVar2[0x909] = (int)&LAB_00063ba8;
      }
      else {
        iVar4 = strncmp(pcVar3,"us",2);
        if (iVar4 == 0) {
          piVar2[1] = (int)(pcVar3 + 2) - iVar6;
          *param_2 = (int)(pcVar3 + 2);
          piVar2[0x909] = (int)&LAB_00063b6c;
        }
        else {
          *param_2 = (int)(pcVar3 + 1);
          cVar1 = *pcVar3;
          piVar2[1] = (int)(pcVar3 + (1 - iVar6));
          switch(cVar1) {
          case '%':
            piVar2[0x909] = (int)&LAB_00063678;
            break;
          default:
            FUN_000658a8(2,"src/spec.c",0x27a,"str[%s] in wrong format, p[%c]",iVar6,cVar1);
            goto LAB_000643bc;
          case 'D':
            iVar4 = *param_3;
            *(undefined2 *)(piVar2 + 3) = 0x54;
            piVar2[2] = 0x25204625;
            *param_3 = iVar4 + 1;
            piVar2[0x403] = iVar4;
            piVar2[0x909] = (int)FUN_00063c6c;
            break;
          case 'F':
            piVar2[0x909] = (int)&LAB_00063d68;
            break;
          case 'H':
            piVar2[0x909] = (int)&LAB_000636dc;
            break;
          case 'L':
            piVar2[0x909] = (int)&LAB_00063800;
            break;
          case 'T':
            piVar2[0x909] = (int)&LAB_0006368c;
            break;
          case 'U':
            piVar2[0x909] = (int)&LAB_00063d34;
            break;
          case 'V':
            piVar2[0x909] = (int)&LAB_00063700;
            break;
          case 'c':
            piVar2[0x909] = (int)&LAB_000636f0;
            break;
          case 'f':
            piVar2[0x909] = (int)FUN_00063b18;
            break;
          case 'k':
            piVar2[0x909] = (int)&LAB_000636c8;
            break;
          case 'm':
            piVar2[0x909] = (int)&DAT_0006382c;
            break;
          case 'n':
            piVar2[0x909] = (int)&LAB_000636b4;
            break;
          case 'p':
            piVar2[0x909] = (int)FUN_00063784;
            break;
          case 't':
            piVar2[0x909] = (int)&LAB_000636a0;
            break;
          case 'v':
            piVar2[0x909] = (int)&LAB_00063740;
          }
        }
      }
    }
  }
  else {
    pcVar3 = strchr(param_1,0x25);
    *param_2 = (int)pcVar3;
    if (pcVar3 == (char *)0x0) {
      sVar5 = strlen(param_1);
      piVar2[1] = sVar5;
      *param_2 = (int)(param_1 + sVar5);
    }
    else {
      piVar2[1] = (int)pcVar3 - (int)param_1;
    }
    piVar2[0x909] = (int)&LAB_00063668;
    piVar2[0x90a] = (int)&LAB_00063638;
    piVar2[0x90b] = (int)&LAB_00063648;
    piVar2[0x90c] = (int)&LAB_00063658;
  }
  FUN_00063f44(piVar2,0);
  return piVar2;
}

