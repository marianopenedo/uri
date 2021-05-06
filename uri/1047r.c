#include <stdio.h>

int main ()
{
	int h_inicial, h_final, m_inicial, m_final, d_hora, d_minuto;
	scanf ("%d %d %d %d", &h_inicial, &m_inicial, &h_final, &m_final);

	if (h_inicial == h_final)
	{
		if (m_inicial == m_final)
		{
			d_hora = 24;
			d_minuto = 0;
		}
		else if (m_inicial > m_final)
		{
			d_hora = 23;
			d_minuto = (60 - m_inicial) + m_final;
		}
		else
		{
			d_hora = 0;
			d_minuto = m_final - m_inicial;
		}
	}
	else if (h_inicial > h_final)
	{
		d_hora = (24 - h_inicial) + h_final;

		if (m_inicial == m_final)
			d_minuto = 0;

		else if (m_inicial > m_final)
		{
			d_hora -= 1;
			d_minuto = (60 - m_inicial) + m_final;
		}

		else
			d_minuto = m_final - m_inicial;
	}
	else
	{
		d_hora = h_final - h_inicial;

		if (m_inicial == m_final)
			d_minuto = 0;

		else if (m_inicial > m_final)
		{
			d_hora -= 1;
			d_minuto = (60 - m_inicial) + m_final;
		}

		else
			d_minuto = m_final - m_inicial;
	}

	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d_hora, d_minuto);
}
